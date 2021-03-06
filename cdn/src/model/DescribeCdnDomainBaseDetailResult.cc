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

#include <alibabacloud/cdn/model/DescribeCdnDomainBaseDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnDomainBaseDetailResult::DescribeCdnDomainBaseDetailResult() :
	ServiceResult()
{}

DescribeCdnDomainBaseDetailResult::DescribeCdnDomainBaseDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnDomainBaseDetailResult::~DescribeCdnDomainBaseDetailResult()
{}

void DescribeCdnDomainBaseDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomainBaseDetailModel = value["DomainBaseDetailModel"];
	for (auto value : allDomainBaseDetailModel)
	{
		DomainBaseDetailModel domainBaseDetailModelObject;
		if(!value["Cname"].isNull())
			domainBaseDetailModelObject.cname = value["Cname"].asString();
		if(!value["CdnType"].isNull())
			domainBaseDetailModelObject.cdnType = value["CdnType"].asString();
		if(!value["DomainStatus"].isNull())
			domainBaseDetailModelObject.domainStatus = value["DomainStatus"].asString();
		if(!value["SourceType"].isNull())
			domainBaseDetailModelObject.sourceType = value["SourceType"].asString();
		if(!value["Region"].isNull())
			domainBaseDetailModelObject.region = value["Region"].asString();
		if(!value["DomainName"].isNull())
			domainBaseDetailModelObject.domainName = value["DomainName"].asString();
		if(!value["Remark"].isNull())
			domainBaseDetailModelObject.remark = value["Remark"].asString();
		if(!value["GmtModified"].isNull())
			domainBaseDetailModelObject.gmtModified = value["GmtModified"].asString();
		if(!value["GmtCreated"].isNull())
			domainBaseDetailModelObject.gmtCreated = value["GmtCreated"].asString();
		auto allSources = value["Sources"]["Source"];
		for (auto value : allSources)
			domainBaseDetailModelObject.sources.push_back(value.asString());
		domainBaseDetailModel_.push_back(domainBaseDetailModelObject);
	}

}

std::vector<DescribeCdnDomainBaseDetailResult::DomainBaseDetailModel> DescribeCdnDomainBaseDetailResult::getDomainBaseDetailModel()const
{
	return domainBaseDetailModel_;
}

