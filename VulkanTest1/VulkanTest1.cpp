#include <vulkan\vulkan.h>

int main(int argc, char *argv[])
{
  // Define App Info for VK.
  VkApplicationInfo vkAppInfo = {};
  vkAppInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
  vkAppInfo.pNext = NULL;
  vkAppInfo.pApplicationName = "VulkanTest";
  vkAppInfo.applicationVersion = 0;
  vkAppInfo.pEngineName = NULL;
  vkAppInfo.engineVersion = 0;
  vkAppInfo.apiVersion = VK_API_VERSION_1_0;

  // Define Vk Info.
  VkInstanceCreateInfo vkInstanceInfo = {};
  vkInstanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  vkInstanceInfo.pApplicationInfo = &vkAppInfo;
  vkInstanceInfo.pNext = NULL;
  vkInstanceInfo.ppEnabledExtensionNames = NULL;
  vkInstanceInfo.enabledExtensionCount = 0;
  vkInstanceInfo.ppEnabledLayerNames = NULL;
  vkInstanceInfo.enabledLayerCount = 0;
  vkInstanceInfo.flags = 0;

  VkInstance vkInstance;
  VkResult vkResult;

  vkResult = vkCreateInstance(&vkInstanceInfo, NULL, &vkInstance);
  vkDestroyInstance(vkInstance, NULL);

  return 0;
}