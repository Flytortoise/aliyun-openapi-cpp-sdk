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

#include <alibabacloud/cms/model/ListNotifyPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ListNotifyPolicyResult::ListNotifyPolicyResult() :
	ServiceResult()
{}

ListNotifyPolicyResult::ListNotifyPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotifyPolicyResult::~ListNotifyPolicyResult()
{}

void ListNotifyPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allNotifyPolicyList = value["NotifyPolicyList"]["NotifyPolicy"];
	for (auto value : allNotifyPolicyList)
	{
		NotifyPolicy notifyPolicyListObject;
		if(!value["AlertName"].isNull())
			notifyPolicyListObject.alertName = value["AlertName"].asString();
		if(!value["Dimensions"].isNull())
			notifyPolicyListObject.dimensions = value["Dimensions"].asString();
		if(!value["Type"].isNull())
			notifyPolicyListObject.type = value["Type"].asString();
		if(!value["Id"].isNull())
			notifyPolicyListObject.id = value["Id"].asString();
		if(!value["StartTime"].isNull())
			notifyPolicyListObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			notifyPolicyListObject.endTime = std::stol(value["EndTime"].asString());
		notifyPolicyList_.push_back(notifyPolicyListObject);
	}
	if(!value["code"].isNull())
		code_ = value["code"].asString();
	if(!value["message"].isNull())
		message_ = value["message"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString();
	if(!value["traceId"].isNull())
		traceId_ = value["traceId"].asString();
	if(!value["total"].isNull())
		total_ = std::stoi(value["total"].asString());

}

std::vector<ListNotifyPolicyResult::NotifyPolicy> ListNotifyPolicyResult::getNotifyPolicyList()const
{
	return notifyPolicyList_;
}

std::string ListNotifyPolicyResult::getMessage()const
{
	return message_;
}

int ListNotifyPolicyResult::getTotal()const
{
	return total_;
}

std::string ListNotifyPolicyResult::getTraceId()const
{
	return traceId_;
}

std::string ListNotifyPolicyResult::getCode()const
{
	return code_;
}

std::string ListNotifyPolicyResult::getSuccess()const
{
	return success_;
}

