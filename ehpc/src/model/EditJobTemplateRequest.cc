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

#include <alibabacloud/ehpc/model/EditJobTemplateRequest.h>

using AlibabaCloud::EHPC::Model::EditJobTemplateRequest;

EditJobTemplateRequest::EditJobTemplateRequest() :
	RpcServiceRequest("ehpc", "2017-07-14", "EditJobTemplate")
{}

EditJobTemplateRequest::~EditJobTemplateRequest()
{}

std::string EditJobTemplateRequest::getStderrRedirectPath()const
{
	return stderrRedirectPath_;
}

void EditJobTemplateRequest::setStderrRedirectPath(const std::string& stderrRedirectPath)
{
	stderrRedirectPath_ = stderrRedirectPath;
	setParameter("StderrRedirectPath", stderrRedirectPath);
}

std::string EditJobTemplateRequest::getVariables()const
{
	return variables_;
}

void EditJobTemplateRequest::setVariables(const std::string& variables)
{
	variables_ = variables;
	setParameter("Variables", variables);
}

std::string EditJobTemplateRequest::getRunasUser()const
{
	return runasUser_;
}

void EditJobTemplateRequest::setRunasUser(const std::string& runasUser)
{
	runasUser_ = runasUser;
	setParameter("RunasUser", runasUser);
}

std::string EditJobTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void EditJobTemplateRequest::setTemplateId(const std::string& templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", templateId);
}

int EditJobTemplateRequest::getPriority()const
{
	return priority_;
}

void EditJobTemplateRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string EditJobTemplateRequest::getCommandLine()const
{
	return commandLine_;
}

void EditJobTemplateRequest::setCommandLine(const std::string& commandLine)
{
	commandLine_ = commandLine;
	setParameter("CommandLine", commandLine);
}

std::string EditJobTemplateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void EditJobTemplateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string EditJobTemplateRequest::getArrayRequest()const
{
	return arrayRequest_;
}

void EditJobTemplateRequest::setArrayRequest(const std::string& arrayRequest)
{
	arrayRequest_ = arrayRequest;
	setParameter("ArrayRequest", arrayRequest);
}

std::string EditJobTemplateRequest::getPackagePath()const
{
	return packagePath_;
}

void EditJobTemplateRequest::setPackagePath(const std::string& packagePath)
{
	packagePath_ = packagePath;
	setParameter("PackagePath", packagePath);
}

bool EditJobTemplateRequest::getReRunnable()const
{
	return reRunnable_;
}

void EditJobTemplateRequest::setReRunnable(bool reRunnable)
{
	reRunnable_ = reRunnable;
	setParameter("ReRunnable", std::to_string(reRunnable));
}

std::string EditJobTemplateRequest::getRegionId()const
{
	return regionId_;
}

void EditJobTemplateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string EditJobTemplateRequest::getName()const
{
	return name_;
}

void EditJobTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string EditJobTemplateRequest::getStdoutRedirectPath()const
{
	return stdoutRedirectPath_;
}

void EditJobTemplateRequest::setStdoutRedirectPath(const std::string& stdoutRedirectPath)
{
	stdoutRedirectPath_ = stdoutRedirectPath;
	setParameter("StdoutRedirectPath", stdoutRedirectPath);
}

