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

#include <alibabacloud/ecs/model/ModifyInstanceAutoRenewAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceAutoRenewAttributeRequest;

ModifyInstanceAutoRenewAttributeRequest::ModifyInstanceAutoRenewAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceAutoRenewAttribute")
{}

ModifyInstanceAutoRenewAttributeRequest::~ModifyInstanceAutoRenewAttributeRequest()
{}

int ModifyInstanceAutoRenewAttributeRequest::getDuration()const
{
	return duration_;
}

void ModifyInstanceAutoRenewAttributeRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

long ModifyInstanceAutoRenewAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyInstanceAutoRenewAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool ModifyInstanceAutoRenewAttributeRequest::getAutoRenew()const
{
	return autoRenew_;
}

void ModifyInstanceAutoRenewAttributeRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::string ModifyInstanceAutoRenewAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceAutoRenewAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceAutoRenewAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyInstanceAutoRenewAttributeRequest::getRenewalStatus()const
{
	return renewalStatus_;
}

void ModifyInstanceAutoRenewAttributeRequest::setRenewalStatus(const std::string& renewalStatus)
{
	renewalStatus_ = renewalStatus;
	setParameter("RenewalStatus", renewalStatus);
}

long ModifyInstanceAutoRenewAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceAutoRenewAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

