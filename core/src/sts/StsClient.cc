/*
* Copyright 2009-2017 Alibaba Cloud All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <alibabacloud/core/sts/StsClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Sts;
using namespace AlibabaCloud::Sts::Model;

StsClient::StsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
}

StsClient::StsClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(credentialsProvider, configuration)
{
}

StsClient::StsClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
}

StsClient::~StsClient()
{
}

CoreClient::EndpointOutcome StsClient::endpoint()const
{
	return CoreClient::EndpointOutcome("sts.aliyuncs.com");
}

StsClient::AssumeRoleOutcome StsClient::assumeRole(const Model::AssumeRoleRequest &request)const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return AssumeRoleOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssumeRoleOutcome(AssumeRoleResult(outcome.result()));
	else
		return AssumeRoleOutcome(Error(outcome.error()));
}

void StsClient::assumeRoleAsync(const Model::AssumeRoleRequest & request, const AssumeRoleAsyncHandler & handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assumeRole(request), context);
	};

	asyncExecute(new Runnable(fn));
}

StsClient::AssumeRoleOutcomeCallable StsClient::assumeRoleCallable(const Model::AssumeRoleRequest & request) const
{
	auto task = std::make_shared<std::packaged_task<AssumeRoleOutcome()>>(
		[this, request]()
	{
		return this->assumeRole(request);
	});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

StsClient::GetCallerIdentityOutcome StsClient::getCallerIdentity(const GetCallerIdentityRequest &request) const
{
	auto endpointOutcome = endpoint();
	if (!endpointOutcome.isSuccess())
		return GetCallerIdentityOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetCallerIdentityOutcome(GetCallerIdentityResult(outcome.result()));
	else
		return GetCallerIdentityOutcome(Error(outcome.error()));
}

void StsClient::getCallerIdentityAsync(const GetCallerIdentityRequest& request, const GetCallerIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getCallerIdentity(request), context);
	};

	asyncExecute(new Runnable(fn));
}

StsClient::GetCallerIdentityOutcomeCallable StsClient::getCallerIdentityCallable(const GetCallerIdentityRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetCallerIdentityOutcome()>>(
		[this, request]()
	{
		return this->getCallerIdentity(request);
	});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}
