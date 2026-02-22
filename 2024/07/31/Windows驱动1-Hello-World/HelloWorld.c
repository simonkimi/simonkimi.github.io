#include <ntddk.h>  // 驱动头

// 驱动卸载函数
VOID DriverUnload(PDRIVER_OBJECT pDriverObject)
{
	KdPrint(("Driver Unload\n"));
}

// 驱动入口函数
NTSTATUS DriverEntry(IN PDRIVER_OBJECT pDriverObject, IN PUNICODE_STRING pRegistryPath)
{
    // 设置卸载函数
	pDriverObject->DriverUnload = DriverUnload;
	KdPrint(("Driver Entry\n"));
	return STATUS_SUCCESS;
}