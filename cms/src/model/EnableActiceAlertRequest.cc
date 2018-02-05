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

#include <alibabacloud/cms/model/EnableActiceAlertRequest.h>

using AlibabaCloud::Cms::Model::EnableActiceAlertRequest;

EnableActiceAlertRequest::EnableActiceAlertRequest() :
	RpcServiceRequest("cms", "2017-03-01", "EnableActiceAlert")
{}

EnableActiceAlertRequest::~EnableActiceAlertRequest()
{}

std::string EnableActiceAlertRequest::getProduct()const
{
	return product_;
}

void EnableActiceAlertRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string EnableActiceAlertRequest::getUserId()const
{
	return userId_;
}

void EnableActiceAlertRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setParameter("UserId", userId);
}

