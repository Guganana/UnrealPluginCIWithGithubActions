// Copyright 2022 Guganana. All Rights Reserved.
#pragma once

#include <CoreMinimal.h>
#include <Modules/ModuleManager.h>


class FEmptyCodePluginRuntime : public IModuleInterface
{
public: 
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
