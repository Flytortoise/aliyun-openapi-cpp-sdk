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

#include <alibabacloud/rds/model/DescribeDampPolicyByCommentResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDampPolicyByCommentResult::DescribeDampPolicyByCommentResult() :
	ServiceResult()
{}

DescribeDampPolicyByCommentResult::DescribeDampPolicyByCommentResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDampPolicyByCommentResult::~DescribeDampPolicyByCommentResult()
{}

void DescribeDampPolicyByCommentResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["Policy"].isNull())
		policy_ = value["Policy"].asString();
	if(!value["TimeRules"].isNull())
		timeRules_ = value["TimeRules"].asString();
	if(!value["ActionRules"].isNull())
		actionRules_ = value["ActionRules"].asString();
	if(!value["SourceRules"].isNull())
		sourceRules_ = value["SourceRules"].asString();
	if(!value["Handler"].isNull())
		handler_ = value["Handler"].asString();

}

std::string DescribeDampPolicyByCommentResult::getPolicy()const
{
	return policy_;
}

std::string DescribeDampPolicyByCommentResult::getTimeRules()const
{
	return timeRules_;
}

std::string DescribeDampPolicyByCommentResult::getActionRules()const
{
	return actionRules_;
}

std::string DescribeDampPolicyByCommentResult::getHandler()const
{
	return handler_;
}

std::string DescribeDampPolicyByCommentResult::getSourceRules()const
{
	return sourceRules_;
}

