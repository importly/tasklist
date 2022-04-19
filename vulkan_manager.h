#pragma once
#include <imgui_impl_vulkan.h>
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.hpp>

class vulkan_manager
{
public:
	//static VkAllocationCallbacks* g_Allocator;
	//static VkInstance               g_Instance = VK_NULL_HANDLE;
	//static VkPhysicalDevice         g_PhysicalDevice = VK_NULL_HANDLE;
	//static VkDevice                 g_Device = VK_NULL_HANDLE;
	//static uint32_t                 g_QueueFamily = (uint32_t)-1;
	//static VkQueue                  g_Queue = VK_NULL_HANDLE;
	//static VkDebugReportCallbackEXT g_DebugReport = VK_NULL_HANDLE;
	//static VkPipelineCache          g_PipelineCache = VK_NULL_HANDLE;
	//static VkDescriptorPool         g_DescriptorPool = VK_NULL_HANDLE;
    //static ImGui_ImplVulkanH_Window g_MainWindowData;
    //static int                      g_MinImageCount = 2;
    //static bool                     g_SwapChainRebuild = false;

	static VkAllocationCallbacks* g_Allocator;
	static VkInstance               g_Instance;
	static VkPhysicalDevice         g_PhysicalDevice;
	static VkDevice                 g_Device;
	static uint32_t                 g_QueueFamily;
	static VkQueue                  g_Queue;
	static VkDebugReportCallbackEXT g_DebugReport;
	static VkPipelineCache          g_PipelineCache;
	static VkDescriptorPool         g_DescriptorPool;

	static ImGui_ImplVulkanH_Window g_MainWindowData;
	static int                      g_MinImageCount;
	static bool                     g_SwapChainRebuild;

	static void SetupVulkan(const char** extensions, uint32_t extensions_count);
    static void SetupVulkanWindow(ImGui_ImplVulkanH_Window* wd, VkSurfaceKHR surface, int width, int height);
    static void CleanupVulkan();
    static void CleanupVulkanWindow();
    static void FrameRender(ImGui_ImplVulkanH_Window* wd, ImDrawData* draw_data);
    static void FramePresent(ImGui_ImplVulkanH_Window* wd);
    static void glfw_error_callback(int error, const char* description);
	static void check_vk_result(VkResult err);
};

