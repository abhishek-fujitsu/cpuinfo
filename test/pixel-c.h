struct cpuinfo_mock_file filesystem[] = {
	{
		.path = "/proc/cpuinfo",
		.size = 656,
		.content =
			"processor\t: 0\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0xd07\n"
			"CPU revision\t: 1\n"
			"\n"
			"processor\t: 1\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0xd07\n"
			"CPU revision\t: 1\n"
			"\n"
			"processor\t: 2\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0xd07\n"
			"CPU revision\t: 1\n"
			"\n"
			"processor\t: 3\n"
			"Features\t: fp asimd evtstrm aes pmull sha1 sha2 crc32\n"
			"CPU implementer\t: 0x41\n"
			"CPU architecture: 8\n"
			"CPU variant\t: 0x1\n"
			"CPU part\t: 0xd07\n"
			"CPU revision\t: 1\n"
			"\n",
	},
	{
		.path = "/system/build.prop",
		.size = 3368,
		.content =
			"\n"
			"# begin build properties\n"
			"# autogenerated by buildinfo.sh\n"
			"ro.build.id=N4F26I\n"
			"ro.build.display.id=N4F26I\n"
			"ro.build.version.incremental=3532671\n"
			"ro.build.version.sdk=25\n"
			"ro.build.version.preview_sdk=0\n"
			"ro.build.version.codename=REL\n"
			"ro.build.version.all_codenames=REL\n"
			"ro.build.version.release=7.1.1\n"
			"ro.build.version.security_patch=2017-01-05\n"
			"ro.build.version.base_os=\n"
			"ro.build.date=Wed Nov 30 20:06:07 UTC 2016\n"
			"ro.build.date.utc=1480536367\n"
			"ro.build.type=user\n"
			"ro.build.user=android-build\n"
			"ro.build.host=vped2.mtv.corp.google.com\n"
			"ro.build.tags=release-keys\n"
			"ro.build.flavor=ryu-user\n"
			"ro.product.model=Pixel C\n"
			"ro.product.brand=google\n"
			"ro.product.name=ryu\n"
			"ro.product.device=dragon\n"
			"ro.product.board=dragon\n"
			"# ro.product.cpu.abi and ro.product.cpu.abi2 are obsolete,\n"
			"# use ro.product.cpu.abilist instead.\n"
			"ro.product.cpu.abi=arm64-v8a\n"
			"ro.product.cpu.abilist=arm64-v8a,armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist32=armeabi-v7a,armeabi\n"
			"ro.product.cpu.abilist64=arm64-v8a\n"
			"ro.product.manufacturer=google\n"
			"ro.wifi.channels=\n"
			"ro.board.platform=tegra210_dragon\n"
			"# ro.build.product is obsolete; use ro.product.device\n"
			"ro.build.product=dragon\n"
			"# Do not try to parse description, fingerprint, or thumbprint\n"
			"ro.build.description=ryu-user 7.1.1 N4F26I 3532671 release-keys\n"
			"ro.build.fingerprint=google/ryu/dragon:7.1.1/N4F26I/3532671:user/release-keys\n"
			"ro.build.characteristics=tablet,nosdcard\n"
			"# end build properties\n"
			"\n"
			"#\n"
			"# ADDITIONAL_BUILD_PROPERTIES\n"
			"#\n"
			"wifi.interface=wlan0\n"
			"ro.hwui.texture_cache_size=86\n"
			"ro.hwui.layer_cache_size=56\n"
			"ro.hwui.r_buffer_cache_size=8\n"
			"ro.hwui.path_cache_size=40\n"
			"ro.hwui.gradient_cache_size=1\n"
			"ro.hwui.drop_shadow_cache_size=6\n"
			"ro.hwui.texture_cache_flushrate=0.4\n"
			"ro.hwui.text_small_cache_width=1024\n"
			"ro.hwui.text_small_cache_height=1024\n"
			"ro.hwui.text_large_cache_width=2048\n"
			"ro.hwui.text_large_cache_height=1024\n"
			"ro.hwui.disable_scissor_opt=true\n"
			"dalvik.vm.heapstartsize=16m\n"
			"dalvik.vm.heapgrowthlimit=192m\n"
			"dalvik.vm.heapsize=512m\n"
			"dalvik.vm.heaptargetutilization=0.75\n"
			"dalvik.vm.heapminfree=512k\n"
			"dalvik.vm.heapmaxfree=8m\n"
			"ro.audio.monitorRotation=true\n"
			"ro.frp.pst=/dev/block/platform/700b0600.sdhci/by-name/PST\n"
			"ro.hardware.vulkan=tegra\n"
			"ro.config.ringtone=Girtab.ogg\n"
			"ro.config.notification_sound=Tethys.ogg\n"
			"ro.config.alarm_alert=Oxygen.ogg\n"
			"ro.carrier=unknown\n"
			"ro.com.android.dataroaming=false\n"
			"ro.url.legal=http://www.google.com/intl/%s/mobile/android/basic/phone-legal.html\n"
			"ro.url.legal.android_privacy=http://www.google.com/intl/%s/mobile/android/basic/privacy.html\n"
			"ro.com.google.clientidbase=android-google\n"
			"ro.com.android.wifi-watchlist=GoogleGuest\n"
			"ro.error.receiver.system.apps=com.google.android.gms\n"
			"ro.setupwizard.enterprise_mode=1\n"
			"ro.atrace.core.services=com.google.android.gms,com.google.android.gms.ui,com.google.android.gms.persistent\n"
			"ro.retaildemo.video_path=/data/preloads/demo/retail_demo.mp4\n"
			"ro.com.android.prov_mobiledata=false\n"
			"keyguard.no_require_sim=true\n"
			"ro.facelock.black_timeout=700\n"
			"ro.facelock.det_timeout=2500\n"
			"ro.facelock.rec_timeout=3500\n"
			"ro.facelock.est_max_time=500\n"
			"camera.flash_off=0\n"
			"drm.service.enabled=true\n"
			"ro.com.widevine.cachesize=16777216\n"
			"persist.sys.dalvik.vm.lib.2=libart.so\n"
			"dalvik.vm.isa.arm64.variant=cortex-a53\n"
			"dalvik.vm.isa.arm64.features=default\n"
			"dalvik.vm.isa.arm.variant=cortex-a7\n"
			"dalvik.vm.isa.arm.features=default\n"
			"net.bt.name=Android\n"
			"dalvik.vm.stack-trace-file=/data/anr/traces.txt\n"
			"ro.build.expect.bootloader=Google_Smaug.7900.27.0\n"
			"ro.expect.recovery_id=\n"
			"\n",
	},
	{
		.path = "/sys/devices/system/cpu/kernel_max",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/possible",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/present",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1912500\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq",
		.size = 6,
		.content = "51000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/core_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/topology/thread_siblings_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/shared_cpu_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index0/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/allocation_policy",
		.size = 13,
		.content = "ReadAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/shared_cpu_list",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/size",
		.size = 4,
		.content = "48K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/number_of_sets",
		.size = 5,
		.content = "2048\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/size",
		.size = 6,
		.content = "2048K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu0/cache/index2/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1912500\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cpufreq/cpuinfo_min_freq",
		.size = 6,
		.content = "51000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/core_id",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/topology/thread_siblings_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/shared_cpu_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index0/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/allocation_policy",
		.size = 13,
		.content = "ReadAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/shared_cpu_list",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/size",
		.size = 4,
		.content = "48K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/number_of_sets",
		.size = 5,
		.content = "2048\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/size",
		.size = 6,
		.content = "2048K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu1/cache/index2/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1912500\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cpufreq/cpuinfo_min_freq",
		.size = 6,
		.content = "51000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/core_id",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/topology/thread_siblings_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/shared_cpu_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index0/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/allocation_policy",
		.size = 13,
		.content = "ReadAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/shared_cpu_list",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/size",
		.size = 4,
		.content = "48K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/number_of_sets",
		.size = 5,
		.content = "2048\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/size",
		.size = 6,
		.content = "2048K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu2/cache/index2/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_max_freq",
		.size = 8,
		.content = "1912500\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cpufreq/cpuinfo_min_freq",
		.size = 6,
		.content = "51000\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/physical_package_id",
		.size = 2,
		.content = "0\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_siblings_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/core_id",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/topology/thread_siblings_list",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/shared_cpu_list",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/size",
		.size = 4,
		.content = "32K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/type",
		.size = 5,
		.content = "Data\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/ways_of_associativity",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index0/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/allocation_policy",
		.size = 13,
		.content = "ReadAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/level",
		.size = 2,
		.content = "1\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/number_of_sets",
		.size = 4,
		.content = "256\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/shared_cpu_list",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/size",
		.size = 4,
		.content = "48K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/type",
		.size = 12,
		.content = "Instruction\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index1/ways_of_associativity",
		.size = 2,
		.content = "3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/allocation_policy",
		.size = 18,
		.content = "ReadWriteAllocate\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/coherency_line_size",
		.size = 3,
		.content = "64\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/level",
		.size = 2,
		.content = "2\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/number_of_sets",
		.size = 5,
		.content = "2048\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/shared_cpu_list",
		.size = 4,
		.content = "0-3\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/size",
		.size = 6,
		.content = "2048K\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/type",
		.size = 8,
		.content = "Unified\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/ways_of_associativity",
		.size = 3,
		.content = "16\n",
	},
	{
		.path = "/sys/devices/system/cpu/cpu3/cache/index2/write_policy",
		.size = 10,
		.content = "WriteBack\n",
	},
	{ NULL },
};