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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMAX95BPSDATARESULT_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMAX95BPSDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cdn/CdnExport.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeDomainMax95BpsDataResult : public ServiceResult
			{
			public:


				DescribeDomainMax95BpsDataResult();
				explicit DescribeDomainMax95BpsDataResult(const std::string &payload);
				~DescribeDomainMax95BpsDataResult();
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getDomesticMax95Bps()const;
				void setDomesticMax95Bps(const std::string& domesticMax95Bps);
				std::string getMax95Bps()const;
				void setMax95Bps(const std::string& max95Bps);
				std::string getOverseasMax95Bps()const;
				void setOverseasMax95Bps(const std::string& overseasMax95Bps);

			protected:
				void parse(const std::string &payload);
			private:
				std::string endTime_;
				std::string domainName_;
				std::string startTime_;
				std::string domesticMax95Bps_;
				std::string max95Bps_;
				std::string overseasMax95Bps_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBEDOMAINMAX95BPSDATARESULT_H_