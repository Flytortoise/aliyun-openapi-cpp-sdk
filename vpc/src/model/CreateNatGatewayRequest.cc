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

#include <alibabacloud/vpc/model/CreateNatGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateNatGatewayRequest;

CreateNatGatewayRequest::CreateNatGatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateNatGateway")
{}

CreateNatGatewayRequest::~CreateNatGatewayRequest()
{}

long CreateNatGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNatGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNatGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNatGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNatGatewayRequest::getRegionId()const
{
	return regionId_;
}

void CreateNatGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateNatGatewayRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNatGatewayRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateNatGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNatGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateNatGatewayRequest::getVpcId()const
{
	return vpcId_;
}

void CreateNatGatewayRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateNatGatewayRequest::getName()const
{
	return name_;
}

void CreateNatGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateNatGatewayRequest::getDescription()const
{
	return description_;
}

void CreateNatGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateNatGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNatGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<CreateNatGatewayRequest::BandwidthPackage> CreateNatGatewayRequest::getBandwidthPackage()const
{
	return bandwidthPackage_;
}

void CreateNatGatewayRequest::setBandwidthPackage(const std::vector<BandwidthPackage>& bandwidthPackage)
{
	bandwidthPackage_ = bandwidthPackage;
	int i = 0;
	for(int i = 0; i!= bandwidthPackage.size(); i++)	{
		auto obj = bandwidthPackage.at(i);
		std::string str ="BandwidthPackage."+ std::to_string(i);
		setParameter(str + ".IpCount", std::to_string(obj.ipCount));
		setParameter(str + ".Bandwidth", std::to_string(obj.bandwidth));
		setParameter(str + ".Zone", obj.zone);
		setParameter(str + ".ISP", obj.iSP);
		setParameter(str + ".InternetChargeType", obj.internetChargeType);
	}
}

std::string CreateNatGatewayRequest::getSpec()const
{
	return spec_;
}

void CreateNatGatewayRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setParameter("Spec", spec);
}

