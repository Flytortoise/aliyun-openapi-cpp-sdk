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

#ifndef ALIBABACLOUD_ESS_MODEL_DELETESCHEDULEDTASKREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DELETESCHEDULEDTASKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DeleteScheduledTaskRequest : public RpcServiceRequest
			{

			public:
				DeleteScheduledTaskRequest();
				~DeleteScheduledTaskRequest();

				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScheduledTaskId()const;
				void setScheduledTaskId(const std::string& scheduledTaskId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string scheduledTaskId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DELETESCHEDULEDTASKREQUEST_H_