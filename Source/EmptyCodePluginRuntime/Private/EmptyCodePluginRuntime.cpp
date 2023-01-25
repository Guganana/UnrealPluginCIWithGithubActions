// Copyright 2022 Guganana. All Rights Reserved.
#include "EmptyCodePluginRuntime.h"


#define LOCTEXT_NAMESPACE "FEmptyCodePluginRuntime"

void FEmptyCodePluginRuntime::StartupModule()
{
	check(false);
}

void FEmptyCodePluginRuntime::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FEmptyCodePluginRuntime, EmptyCodePluginRuntime)
