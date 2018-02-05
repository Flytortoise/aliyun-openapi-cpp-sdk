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

#include <alibabacloud/cms/model/DisableAlarmRequest.h>

using AlibabaCloud::Cms::Model::DisableAlarmRequest;

DisableAlarmRequest::DisableAlarmRequest() :
	RpcServiceRequest("cms", "2017-03-01", "DisableAlarm")
{}

DisableAlarmRequest::~DisableAlarmRequest()
{}

std::string DisableAlarmRequest::getCallby_cms_owner()const
{
	return callby_cms_owner_;
}

void DisableAlarmRequest::setCallby_cms_owner(const std::string& callby_cms_owner)
{
	callby_cms_owner_ = callby_cms_owner;
	setParameter("Callby_cms_owner", callby_cms_owner);
}

std::string DisableAlarmRequest::getId()const
{
	return id_;
}

void DisableAlarmRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

