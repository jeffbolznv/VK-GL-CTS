/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
m_vk.getPhysicalDeviceInfo				= (GetPhysicalDeviceInfoFunc)				GET_PROC_ADDR("vkGetPhysicalDeviceInfo");
m_vk.createDevice						= (CreateDeviceFunc)						GET_PROC_ADDR("vkCreateDevice");
m_vk.destroyDevice						= (DestroyDeviceFunc)						GET_PROC_ADDR("vkDestroyDevice");
m_vk.getGlobalExtensionInfo				= (GetGlobalExtensionInfoFunc)				GET_PROC_ADDR("vkGetGlobalExtensionInfo");
m_vk.getPhysicalDeviceExtensionInfo		= (GetPhysicalDeviceExtensionInfoFunc)		GET_PROC_ADDR("vkGetPhysicalDeviceExtensionInfo");
m_vk.enumerateLayers					= (EnumerateLayersFunc)						GET_PROC_ADDR("vkEnumerateLayers");
m_vk.getDeviceQueue						= (GetDeviceQueueFunc)						GET_PROC_ADDR("vkGetDeviceQueue");
m_vk.queueSubmit						= (QueueSubmitFunc)							GET_PROC_ADDR("vkQueueSubmit");
m_vk.queueAddMemReferences				= (QueueAddMemReferencesFunc)				GET_PROC_ADDR("vkQueueAddMemReferences");
m_vk.queueRemoveMemReferences			= (QueueRemoveMemReferencesFunc)			GET_PROC_ADDR("vkQueueRemoveMemReferences");
m_vk.queueWaitIdle						= (QueueWaitIdleFunc)						GET_PROC_ADDR("vkQueueWaitIdle");
m_vk.deviceWaitIdle						= (DeviceWaitIdleFunc)						GET_PROC_ADDR("vkDeviceWaitIdle");
m_vk.allocMemory						= (AllocMemoryFunc)							GET_PROC_ADDR("vkAllocMemory");
m_vk.freeMemory							= (FreeMemoryFunc)							GET_PROC_ADDR("vkFreeMemory");
m_vk.setMemoryPriority					= (SetMemoryPriorityFunc)					GET_PROC_ADDR("vkSetMemoryPriority");
m_vk.mapMemory							= (MapMemoryFunc)							GET_PROC_ADDR("vkMapMemory");
m_vk.unmapMemory						= (UnmapMemoryFunc)							GET_PROC_ADDR("vkUnmapMemory");
m_vk.flushMappedMemory					= (FlushMappedMemoryFunc)					GET_PROC_ADDR("vkFlushMappedMemory");
m_vk.pinSystemMemory					= (PinSystemMemoryFunc)						GET_PROC_ADDR("vkPinSystemMemory");
m_vk.getMultiDeviceCompatibility		= (GetMultiDeviceCompatibilityFunc)			GET_PROC_ADDR("vkGetMultiDeviceCompatibility");
m_vk.openSharedMemory					= (OpenSharedMemoryFunc)					GET_PROC_ADDR("vkOpenSharedMemory");
m_vk.openSharedSemaphore				= (OpenSharedSemaphoreFunc)					GET_PROC_ADDR("vkOpenSharedSemaphore");
m_vk.openPeerMemory						= (OpenPeerMemoryFunc)						GET_PROC_ADDR("vkOpenPeerMemory");
m_vk.openPeerImage						= (OpenPeerImageFunc)						GET_PROC_ADDR("vkOpenPeerImage");
m_vk.destroyObject						= (DestroyObjectFunc)						GET_PROC_ADDR("vkDestroyObject");
m_vk.getObjectInfo						= (GetObjectInfoFunc)						GET_PROC_ADDR("vkGetObjectInfo");
m_vk.queueBindObjectMemory				= (QueueBindObjectMemoryFunc)				GET_PROC_ADDR("vkQueueBindObjectMemory");
m_vk.queueBindObjectMemoryRange			= (QueueBindObjectMemoryRangeFunc)			GET_PROC_ADDR("vkQueueBindObjectMemoryRange");
m_vk.queueBindImageMemoryRange			= (QueueBindImageMemoryRangeFunc)			GET_PROC_ADDR("vkQueueBindImageMemoryRange");
m_vk.createFence						= (CreateFenceFunc)							GET_PROC_ADDR("vkCreateFence");
m_vk.resetFences						= (ResetFencesFunc)							GET_PROC_ADDR("vkResetFences");
m_vk.getFenceStatus						= (GetFenceStatusFunc)						GET_PROC_ADDR("vkGetFenceStatus");
m_vk.waitForFences						= (WaitForFencesFunc)						GET_PROC_ADDR("vkWaitForFences");
m_vk.createSemaphore					= (CreateSemaphoreFunc)						GET_PROC_ADDR("vkCreateSemaphore");
m_vk.queueSignalSemaphore				= (QueueSignalSemaphoreFunc)				GET_PROC_ADDR("vkQueueSignalSemaphore");
m_vk.queueWaitSemaphore					= (QueueWaitSemaphoreFunc)					GET_PROC_ADDR("vkQueueWaitSemaphore");
m_vk.createEvent						= (CreateEventFunc)							GET_PROC_ADDR("vkCreateEvent");
m_vk.getEventStatus						= (GetEventStatusFunc)						GET_PROC_ADDR("vkGetEventStatus");
m_vk.setEvent							= (SetEventFunc)							GET_PROC_ADDR("vkSetEvent");
m_vk.resetEvent							= (ResetEventFunc)							GET_PROC_ADDR("vkResetEvent");
m_vk.createQueryPool					= (CreateQueryPoolFunc)						GET_PROC_ADDR("vkCreateQueryPool");
m_vk.getQueryPoolResults				= (GetQueryPoolResultsFunc)					GET_PROC_ADDR("vkGetQueryPoolResults");
m_vk.getFormatInfo						= (GetFormatInfoFunc)						GET_PROC_ADDR("vkGetFormatInfo");
m_vk.createBuffer						= (CreateBufferFunc)						GET_PROC_ADDR("vkCreateBuffer");
m_vk.createBufferView					= (CreateBufferViewFunc)					GET_PROC_ADDR("vkCreateBufferView");
m_vk.createImage						= (CreateImageFunc)							GET_PROC_ADDR("vkCreateImage");
m_vk.getImageSubresourceInfo			= (GetImageSubresourceInfoFunc)				GET_PROC_ADDR("vkGetImageSubresourceInfo");
m_vk.createImageView					= (CreateImageViewFunc)						GET_PROC_ADDR("vkCreateImageView");
m_vk.createColorAttachmentView			= (CreateColorAttachmentViewFunc)			GET_PROC_ADDR("vkCreateColorAttachmentView");
m_vk.createDepthStencilView				= (CreateDepthStencilViewFunc)				GET_PROC_ADDR("vkCreateDepthStencilView");
m_vk.createShader						= (CreateShaderFunc)						GET_PROC_ADDR("vkCreateShader");
m_vk.createGraphicsPipeline				= (CreateGraphicsPipelineFunc)				GET_PROC_ADDR("vkCreateGraphicsPipeline");
m_vk.createGraphicsPipelineDerivative	= (CreateGraphicsPipelineDerivativeFunc)	GET_PROC_ADDR("vkCreateGraphicsPipelineDerivative");
m_vk.createComputePipeline				= (CreateComputePipelineFunc)				GET_PROC_ADDR("vkCreateComputePipeline");
m_vk.storePipeline						= (StorePipelineFunc)						GET_PROC_ADDR("vkStorePipeline");
m_vk.loadPipeline						= (LoadPipelineFunc)						GET_PROC_ADDR("vkLoadPipeline");
m_vk.loadPipelineDerivative				= (LoadPipelineDerivativeFunc)				GET_PROC_ADDR("vkLoadPipelineDerivative");
m_vk.createPipelineLayout				= (CreatePipelineLayoutFunc)				GET_PROC_ADDR("vkCreatePipelineLayout");
m_vk.createSampler						= (CreateSamplerFunc)						GET_PROC_ADDR("vkCreateSampler");
m_vk.createDescriptorSetLayout			= (CreateDescriptorSetLayoutFunc)			GET_PROC_ADDR("vkCreateDescriptorSetLayout");
m_vk.beginDescriptorPoolUpdate			= (BeginDescriptorPoolUpdateFunc)			GET_PROC_ADDR("vkBeginDescriptorPoolUpdate");
m_vk.endDescriptorPoolUpdate			= (EndDescriptorPoolUpdateFunc)				GET_PROC_ADDR("vkEndDescriptorPoolUpdate");
m_vk.createDescriptorPool				= (CreateDescriptorPoolFunc)				GET_PROC_ADDR("vkCreateDescriptorPool");
m_vk.resetDescriptorPool				= (ResetDescriptorPoolFunc)					GET_PROC_ADDR("vkResetDescriptorPool");
m_vk.allocDescriptorSets				= (AllocDescriptorSetsFunc)					GET_PROC_ADDR("vkAllocDescriptorSets");
m_vk.clearDescriptorSets				= (ClearDescriptorSetsFunc)					GET_PROC_ADDR("vkClearDescriptorSets");
m_vk.updateDescriptors					= (UpdateDescriptorsFunc)					GET_PROC_ADDR("vkUpdateDescriptors");
m_vk.createDynamicViewportState			= (CreateDynamicViewportStateFunc)			GET_PROC_ADDR("vkCreateDynamicViewportState");
m_vk.createDynamicRasterState			= (CreateDynamicRasterStateFunc)			GET_PROC_ADDR("vkCreateDynamicRasterState");
m_vk.createDynamicColorBlendState		= (CreateDynamicColorBlendStateFunc)		GET_PROC_ADDR("vkCreateDynamicColorBlendState");
m_vk.createDynamicDepthStencilState		= (CreateDynamicDepthStencilStateFunc)		GET_PROC_ADDR("vkCreateDynamicDepthStencilState");
m_vk.createCommandBuffer				= (CreateCommandBufferFunc)					GET_PROC_ADDR("vkCreateCommandBuffer");
m_vk.beginCommandBuffer					= (BeginCommandBufferFunc)					GET_PROC_ADDR("vkBeginCommandBuffer");
m_vk.endCommandBuffer					= (EndCommandBufferFunc)					GET_PROC_ADDR("vkEndCommandBuffer");
m_vk.resetCommandBuffer					= (ResetCommandBufferFunc)					GET_PROC_ADDR("vkResetCommandBuffer");
m_vk.cmdBindPipeline					= (CmdBindPipelineFunc)						GET_PROC_ADDR("vkCmdBindPipeline");
m_vk.cmdBindDynamicStateObject			= (CmdBindDynamicStateObjectFunc)			GET_PROC_ADDR("vkCmdBindDynamicStateObject");
m_vk.cmdBindDescriptorSets				= (CmdBindDescriptorSetsFunc)				GET_PROC_ADDR("vkCmdBindDescriptorSets");
m_vk.cmdBindIndexBuffer					= (CmdBindIndexBufferFunc)					GET_PROC_ADDR("vkCmdBindIndexBuffer");
m_vk.cmdBindVertexBuffers				= (CmdBindVertexBuffersFunc)				GET_PROC_ADDR("vkCmdBindVertexBuffers");
m_vk.cmdDraw							= (CmdDrawFunc)								GET_PROC_ADDR("vkCmdDraw");
m_vk.cmdDrawIndexed						= (CmdDrawIndexedFunc)						GET_PROC_ADDR("vkCmdDrawIndexed");
m_vk.cmdDrawIndirect					= (CmdDrawIndirectFunc)						GET_PROC_ADDR("vkCmdDrawIndirect");
m_vk.cmdDrawIndexedIndirect				= (CmdDrawIndexedIndirectFunc)				GET_PROC_ADDR("vkCmdDrawIndexedIndirect");
m_vk.cmdDispatch						= (CmdDispatchFunc)							GET_PROC_ADDR("vkCmdDispatch");
m_vk.cmdDispatchIndirect				= (CmdDispatchIndirectFunc)					GET_PROC_ADDR("vkCmdDispatchIndirect");
m_vk.cmdCopyBuffer						= (CmdCopyBufferFunc)						GET_PROC_ADDR("vkCmdCopyBuffer");
m_vk.cmdCopyImage						= (CmdCopyImageFunc)						GET_PROC_ADDR("vkCmdCopyImage");
m_vk.cmdBlitImage						= (CmdBlitImageFunc)						GET_PROC_ADDR("vkCmdBlitImage");
m_vk.cmdCopyBufferToImage				= (CmdCopyBufferToImageFunc)				GET_PROC_ADDR("vkCmdCopyBufferToImage");
m_vk.cmdCopyImageToBuffer				= (CmdCopyImageToBufferFunc)				GET_PROC_ADDR("vkCmdCopyImageToBuffer");
m_vk.cmdCloneImageData					= (CmdCloneImageDataFunc)					GET_PROC_ADDR("vkCmdCloneImageData");
m_vk.cmdUpdateBuffer					= (CmdUpdateBufferFunc)						GET_PROC_ADDR("vkCmdUpdateBuffer");
m_vk.cmdFillBuffer						= (CmdFillBufferFunc)						GET_PROC_ADDR("vkCmdFillBuffer");
m_vk.cmdClearColorImage					= (CmdClearColorImageFunc)					GET_PROC_ADDR("vkCmdClearColorImage");
m_vk.cmdClearDepthStencil				= (CmdClearDepthStencilFunc)				GET_PROC_ADDR("vkCmdClearDepthStencil");
m_vk.cmdResolveImage					= (CmdResolveImageFunc)						GET_PROC_ADDR("vkCmdResolveImage");
m_vk.cmdSetEvent						= (CmdSetEventFunc)							GET_PROC_ADDR("vkCmdSetEvent");
m_vk.cmdResetEvent						= (CmdResetEventFunc)						GET_PROC_ADDR("vkCmdResetEvent");
m_vk.cmdWaitEvents						= (CmdWaitEventsFunc)						GET_PROC_ADDR("vkCmdWaitEvents");
m_vk.cmdPipelineBarrier					= (CmdPipelineBarrierFunc)					GET_PROC_ADDR("vkCmdPipelineBarrier");
m_vk.cmdBeginQuery						= (CmdBeginQueryFunc)						GET_PROC_ADDR("vkCmdBeginQuery");
m_vk.cmdEndQuery						= (CmdEndQueryFunc)							GET_PROC_ADDR("vkCmdEndQuery");
m_vk.cmdResetQueryPool					= (CmdResetQueryPoolFunc)					GET_PROC_ADDR("vkCmdResetQueryPool");
m_vk.cmdWriteTimestamp					= (CmdWriteTimestampFunc)					GET_PROC_ADDR("vkCmdWriteTimestamp");
m_vk.cmdCopyQueryPoolResults			= (CmdCopyQueryPoolResultsFunc)				GET_PROC_ADDR("vkCmdCopyQueryPoolResults");
m_vk.cmdInitAtomicCounters				= (CmdInitAtomicCountersFunc)				GET_PROC_ADDR("vkCmdInitAtomicCounters");
m_vk.cmdLoadAtomicCounters				= (CmdLoadAtomicCountersFunc)				GET_PROC_ADDR("vkCmdLoadAtomicCounters");
m_vk.cmdSaveAtomicCounters				= (CmdSaveAtomicCountersFunc)				GET_PROC_ADDR("vkCmdSaveAtomicCounters");
m_vk.createFramebuffer					= (CreateFramebufferFunc)					GET_PROC_ADDR("vkCreateFramebuffer");
m_vk.createRenderPass					= (CreateRenderPassFunc)					GET_PROC_ADDR("vkCreateRenderPass");
m_vk.cmdBeginRenderPass					= (CmdBeginRenderPassFunc)					GET_PROC_ADDR("vkCmdBeginRenderPass");
m_vk.cmdEndRenderPass					= (CmdEndRenderPassFunc)					GET_PROC_ADDR("vkCmdEndRenderPass");
