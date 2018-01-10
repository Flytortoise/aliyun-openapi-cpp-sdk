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

#include <alibabacloud/slb/model/DescribeListenerAccessControlAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeListenerAccessControlAttributeResult::DescribeListenerAccessControlAttributeResult() :
	ServiceResult()
{}

DescribeListenerAccessControlAttributeResult::DescribeListenerAccessControlAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeListenerAccessControlAttributeResult::~DescribeListenerAccessControlAttributeResult()
{}

void DescribeListenerAccessControlAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	accessControlStatus_ = value["AccessControlStatus"].asString();
	sourceItems_ = value["SourceItems"].asString();

}

std::string DescribeListenerAccessControlAttributeResult::getAccessControlStatus()const
{
	return accessControlStatus_;
}

void DescribeListenerAccessControlAttributeResult::setAccessControlStatus(const std::string& accessControlStatus)
{
	accessControlStatus_ = accessControlStatus;
}

std::string DescribeListenerAccessControlAttributeResult::getSourceItems()const
{
	return sourceItems_;
}

void DescribeListenerAccessControlAttributeResult::setSourceItems(const std::string& sourceItems)
{
	sourceItems_ = sourceItems;
}
