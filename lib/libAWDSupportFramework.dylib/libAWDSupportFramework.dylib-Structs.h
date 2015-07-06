/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned deltaTransitTime : 1;
	unsigned timestamp : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned inBytes : 1;
	unsigned outBytes : 1;
	unsigned timestamp : 1;
	unsigned disconnectReason : 1;
	unsigned duration : 1;
	unsigned ipv4Installed : 1;
	unsigned ipv6Installed : 1;
	unsigned reassertCount : 1;
	unsigned systemAuthenMethod : 1;
	unsigned triggerTrafficClass : 1;
	unsigned triggerType : 1;
	unsigned userAuthenMethod : 1;
	unsigned appVpnUsed : 1;
	unsigned connectFailed : 1;
	unsigned proxyInstalled : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned timestamp : 1;
	unsigned connectionType : 1;
	unsigned dualChannelState : 1;
	unsigned error : 1;
	unsigned flushes : 1;
	unsigned linkQuality : 1;
	unsigned payloadSize : 1;
	unsigned sendDuration : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned duration : 1;
	unsigned result : 1;
	unsigned timestamp : 1;
	unsigned type : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned distance : 1;
} SCD_Struct_AW5;

typedef struct {
	unsigned timestamp : 1;
	unsigned count : 1;
	unsigned nCallActive : 1;
	unsigned nCallIdle : 1;
	unsigned nCellularGood : 1;
	unsigned nData : 1;
	unsigned nNegativeStatusUpdate : 1;
	unsigned nPositiveStatusUpdate : 1;
	unsigned nRunning : 1;
	unsigned nStationary : 1;
	unsigned nStatusUpdateDelayBin1 : 1;
	unsigned nStatusUpdateDelayBin2 : 1;
	unsigned nStatusUpdateDelayBin3 : 1;
	unsigned nStatusUpdateDelayBin4 : 1;
	unsigned nStatusUpdateDelayBin5 : 1;
	unsigned nStatusUpdateDelayBin6 : 1;
	unsigned nUnknownStatusUpdat : 1;
	unsigned nVehicular : 1;
	unsigned nVoice : 1;
	unsigned nWalking : 1;
	unsigned nWifiBadBcn : 1;
	unsigned nWifiBadLoad : 1;
	unsigned nWifiBadPER : 1;
	unsigned nWifiBadRSSI : 1;
	unsigned nWifiBadSNR : 1;
	unsigned nWifiBadTransportRTP : 1;
	unsigned nWifiBadTransportSymptom : 1;
	unsigned nWifiNotInit : 1;
	unsigned nWifiNotReady : 1;
} SCD_Struct_AW6;

typedef struct {
	unsigned sequenceNumber : 1;
	unsigned timestamp : 1;
	unsigned error : 1;
} SCD_Struct_AW7;

typedef struct {
	unsigned timestamp : 1;
	unsigned connectionType : 1;
	unsigned genericError : 1;
	unsigned isDSUser : 1;
	unsigned isPhoneUser : 1;
	unsigned pOSIXError : 1;
	unsigned registrationError : 1;
	unsigned resultCode : 1;
	unsigned success : 1;
	unsigned uRLError : 1;
} SCD_Struct_AW8;

typedef struct {
	unsigned timestamp : 1;
	unsigned errorCode : 1;
	unsigned isVideo : 1;
	unsigned onLockScreen : 1;
	unsigned sendDuration : 1;
} SCD_Struct_AW9;

typedef struct {
	unsigned bundleBGDuration : 1;
	unsigned bundleFGDuration : 1;
	unsigned numMOConnectionTriggered : 1;
	unsigned numMTConnectionTriggered : 1;
	unsigned rAT : 1;
	unsigned totalBytesTransferred : 1;
} SCD_Struct_AW10;

typedef struct {
	unsigned timestamp : 1;
	unsigned available : 1;
	unsigned deviceIdentifierMap : 1;
	unsigned flags : 1;
	unsigned reason : 1;
	unsigned subreason : 1;
	unsigned version : 1;
} SCD_Struct_AW11;

typedef struct {
	unsigned bytesReceived : 1;
	unsigned bytesSent : 1;
	unsigned closeError : 1;
	unsigned isToDefaultPairedDevice : 1;
	unsigned packetsReceived : 1;
	unsigned packetsSent : 1;
	unsigned priority : 1;
	unsigned socketError : 1;
	unsigned timestamp : 1;
} SCD_Struct_AW12;

typedef struct {
	unsigned lTECTRSRP : 1;
	unsigned lTERSRP : 1;
	unsigned timestamp : 1;
	unsigned wiFiRSSI : 1;
	unsigned wiFiSINR : 1;
	unsigned bBAudioErasures : 1;
	unsigned bBAudioPacketLoss : 1;
	unsigned bSSLoad : 1;
	unsigned beaconRate : 1;
	unsigned hOBool : 1;
	unsigned lTEDataLQM : 1;
	unsigned lTESINR : 1;
	unsigned lTETxPower : 1;
	unsigned lTEVoiceLQM : 1;
	unsigned latteDejitterBufferUnderflow : 1;
	unsigned latteErasures : 1;
	unsigned latteNominalJitterBufferSize : 1;
	unsigned latteRTPPacketLoss : 1;
	unsigned sessionId : 1;
	unsigned signalBar : 1;
	unsigned wiFiRxRetry : 1;
	unsigned wiFiTxPER : 1;
	unsigned aTMRegistrationState : 1;
	unsigned captiveNetwork : 1;
	unsigned hOCapability : 1;
	unsigned iPSecTunnelStatus : 1;
	unsigned iWLANStatus : 1;
	unsigned lTEQoSAvailable : 1;
	unsigned wOWEnabled : 1;
	unsigned wiFiBSSIDChange : 1;
	unsigned wiFiPreferred : 1;
} SCD_Struct_AW13;

typedef struct {
	unsigned timestamp : 1;
	unsigned backCameraCaptureDuration : 1;
	unsigned callDuration : 1;
	unsigned conferenceMiscError : 1;
	unsigned connectDuration : 1;
	unsigned connectionType : 1;
	unsigned currentNatType : 1;
	unsigned dataRate : 1;
	unsigned diagnosticPingAvg : 1;
	unsigned diagnosticPingMax : 1;
	unsigned diagnosticPingMin : 1;
	unsigned diagnosticPingPacketLoss : 1;
	unsigned endedReason : 1;
	unsigned frontCameraCaptureDuration : 1;
	unsigned gameKitError : 1;
	unsigned genericError : 1;
	unsigned gksError : 1;
	unsigned gksReturnCode : 1;
	unsigned invitationServiceError : 1;
	unsigned isAudioInterrupted : 1;
	unsigned isCallUpgrade : 1;
	unsigned isInitiator : 1;
	unsigned isNetworkActive : 1;
	unsigned isNetworkEnabled : 1;
	unsigned isNetworkReachable : 1;
	unsigned isVideo : 1;
	unsigned isVideoInterrupted : 1;
	unsigned linkQuality : 1;
	unsigned localNetworkConnection : 1;
	unsigned messageDeliveryError : 1;
	unsigned networkCheckResult : 1;
	unsigned onLockScreen : 1;
	unsigned registrationError : 1;
	unsigned relayConnectDuration : 1;
	unsigned relayError : 1;
	unsigned remoteNatType : 1;
	unsigned remoteNetworkConnection : 1;
	unsigned usesRelay : 1;
	unsigned viceroyError : 1;
} SCD_Struct_AW14;

typedef struct {
	unsigned timestamp : 1;
	unsigned channelOfDestinationAP : 1;
	unsigned channelOfSWAP : 1;
	unsigned easyConfigStoppedReasonError : 1;
	unsigned rssiOfDestinationAP : 1;
	unsigned rssiOfSWAP : 1;
	unsigned secondsToApplyConfig : 1;
	unsigned secondsToCompleteFullConfig : 1;
	unsigned secondsToCompleteMFiSAPAuth : 1;
	unsigned secondsToCompletePostConfigCheck : 1;
	unsigned secondsToFindPostConfigDevice : 1;
	unsigned secondsToFindPreConfigDevice : 1;
	unsigned secondsToGetLinkUpOnDestination : 1;
	unsigned secondsToGetLinkUpOnSWAP : 1;
	unsigned snrOfDestinationAP : 1;
	unsigned snrOfSWAP : 1;
	unsigned wifiJoinDestinationAPError : 1;
	unsigned wifiJoinSWAPError : 1;
	unsigned adminPasswordSet : 1;
	unsigned destinationNetworkPSKInKeychain : 1;
	unsigned destinationNetworkRecommendationUsed : 1;
	unsigned hitJoiningDestinationAPTimeout : 1;
	unsigned hitJoiningTargetSWAPTimeout : 1;
	unsigned pauseAfterApply : 1;
	unsigned playPasswordSet : 1;
	unsigned userChangedFriendlyName : 1;
} SCD_Struct_AW15;

typedef struct {
	unsigned timestamp : 1;
	unsigned alsAutoBrightnessChangeCount : 1;
	unsigned alsAutoBrightnessCurveE0A : 1;
	unsigned alsAutoBrightnessCurveE0B : 1;
	unsigned alsAutoBrightnessCurveE1 : 1;
	unsigned alsAutoBrightnessCurveE2 : 1;
	unsigned alsAutoBrightnessCurveEdynth : 1;
	unsigned alsAutoBrightnessCurveL0A : 1;
	unsigned alsAutoBrightnessCurveL0B : 1;
	unsigned alsAutoBrightnessCurveL1 : 1;
	unsigned alsAutoBrightnessCurveL2 : 1;
	unsigned alsAutoBrightnessLux : 1;
	unsigned alsAutoBrightnessSlider : 1;
	unsigned alsBrightnessEnableCnt : 1;
	unsigned dispOnCount : 1;
	unsigned displayIdlePercentage : 1;
	unsigned frameRateResidencyPercentage : 1;
	unsigned mieCount : 1;
	unsigned mieDuration : 1;
	unsigned pluggedDisplayOnDuration : 1;
	unsigned residencyPercentage30Hz : 1;
	unsigned residencyPercentage60Hz : 1;
	unsigned totalBacklightPower : 1;
	unsigned totalDisplayPower : 1;
	unsigned unpluggedDisplayOnDuration : 1;
} SCD_Struct_AW16;

typedef struct {
	unsigned gateOpenTime : 1;
	unsigned trafficWatchDuration : 1;
	unsigned trafficWatchTime : 1;
	unsigned arpFailureCount : 1;
	unsigned bcnPerSign : 1;
	unsigned bcnRcvs : 1;
	unsigned bcnSched : 1;
	unsigned dnsServersImpacted : 1;
	unsigned dnsServersTotal : 1;
	unsigned fwTxFail : 1;
	unsigned fwTxFrames : 1;
	unsigned fwTxPerSign : 1;
	unsigned fwTxRetrans : 1;
	unsigned gwArpExpiry : 1;
	unsigned netScore : 1;
	unsigned rssi : 1;
	unsigned rxFrames : 1;
	unsigned sympAwdCode : 1;
	unsigned sympSign : 1;
	unsigned trafficWatchRx : 1;
	unsigned trgDisc : 1;
	unsigned txFail : 1;
	unsigned txFrames : 1;
	unsigned txPerSign : 1;
	unsigned txRetrans : 1;
	unsigned usrImpact : 1;
	unsigned usrInput : 1;
	unsigned validState : 1;
} SCD_Struct_AW17;

typedef struct {
	unsigned connectEndToRequestStartMillis : 1;
	unsigned connectStartToConnectEndMillis : 1;
	unsigned connectStartToSecureConnectionStartMillis : 1;
	unsigned domainLookupEndToConnectStartMillis : 1;
	unsigned domainLookupStartToDomainLookupEndMillis : 1;
	unsigned errorCode : 1;
	unsigned fetchStartToDomainLookupStartMillis : 1;
	unsigned navigationStartToRedirectStartMillis : 1;
	unsigned redirectEndToFetchStartMillis : 1;
	unsigned redirectStartToRedirectEndMillis : 1;
	unsigned requestStartToResponseStartMillis : 1;
	unsigned responseStartToResponseEndMillis : 1;
	unsigned secureConnectionStartToConnectEndMillis : 1;
	unsigned timestamp : 1;
} SCD_Struct_AW18;

typedef struct {
	unsigned timestamp : 1;
	unsigned audioOnly : 1;
	unsigned clientAuthMs : 1;
	unsigned clientBonjourMs : 1;
	unsigned clientConnectMs : 1;
	unsigned clientInfoMs : 1;
	unsigned clientPostAuthMs : 1;
	unsigned clientSecureConnectionMs : 1;
	unsigned status : 1;
	unsigned transportType : 1;
	unsigned type : 1;
} SCD_Struct_AW19;

typedef struct {
	long long list;
	unsigned count;
	unsigned size;
} SCD_Struct_AW20;

typedef struct {
	int list;
	unsigned count;
	unsigned size;
} SCD_Struct_AW21;

typedef struct {
	unsigned list;
	unsigned count;
	unsigned size;
} SCD_Struct_AW22;

typedef struct {
	unsigned timestamp : 1;
	unsigned wifi2P4GHzRxDuration : 1;
	unsigned wifi2P4GHzTxDuration : 1;
	unsigned wifi5GHz20MHzRxDuration : 1;
	unsigned wifi5GHz20MHzTxDuration : 1;
	unsigned wifi5GHz40MHzRxDuration : 1;
	unsigned wifi5GHz40MHzTxDuration : 1;
	unsigned wifi5GHz80MHzRxDuration : 1;
	unsigned wifi5GHz80MHzTxDuration : 1;
	unsigned wifiFRTSDuration : 1;
	unsigned wifiHsicActiveDuration : 1;
	unsigned wifiPcieL0Duration : 1;
	unsigned wifiPcieL10Duration : 1;
	unsigned wifiPcieL11Duration : 1;
	unsigned wifiPcieL12Duration : 1;
	unsigned wifiScanDuration : 1;
	unsigned wifiSleepDuration : 1;
	unsigned wifiTotalDuration : 1;
	unsigned wifiTotalPowerMicroWatt : 1;
} SCD_Struct_AW23;

typedef struct {
	unsigned connectEndToRequestStartMillis : 1;
	unsigned connectStartToConnectEndMillis : 1;
	unsigned connectStartToSecureConnectionStartMillis : 1;
	unsigned domainLookupEndToConnectStartMillis : 1;
	unsigned domainLookupStartToDomainLookupEndMillis : 1;
	unsigned fetchStartToDomainLookupStartMillis : 1;
	unsigned navigationStartToRedirectStartMillis : 1;
	unsigned redirectEndToFetchStartMillis : 1;
	unsigned redirectStartToRedirectEndMillis : 1;
	unsigned requestStartToResponseStartMillis : 1;
	unsigned responseStartToResponseEndMillis : 1;
	unsigned secureConnectionStartToConnectEndMillis : 1;
	unsigned timestamp : 1;
} SCD_Struct_AW24;

typedef struct {
	unsigned timestamp : 1;
	unsigned audioCompressionType : 1;
	unsigned clientAnnounceMs : 1;
	unsigned clientAuthMs : 1;
	unsigned clientBonjourMs : 1;
	unsigned clientConnectMs : 1;
	unsigned clientSetupAudioMs : 1;
	unsigned clientSetupScreenMs : 1;
	unsigned latencyMs : 1;
	unsigned serverRecordMs : 1;
	unsigned status : 1;
	unsigned transportType : 1;
} SCD_Struct_AW25;

typedef struct {
	unsigned timestamp : 1;
	unsigned a2dpAssocMinutes : 1;
	unsigned cellularDataRxBytes : 1;
	unsigned cellularDataTxBytes : 1;
	unsigned hidAssocMinutes : 1;
	unsigned scoAssocMinutes : 1;
	unsigned statsCollectionMinutes : 1;
	unsigned wifiA2dpRxBytes : 1;
	unsigned wifiA2dpTxBytes : 1;
	unsigned wifiAssocMinutes : 1;
	unsigned wifiHidRxBytes : 1;
	unsigned wifiHidTxBytes : 1;
	unsigned wifiRxBytes : 1;
	unsigned wifiScoRxBytes : 1;
	unsigned wifiScoTxBytes : 1;
	unsigned wifiTxBytes : 1;
} SCD_Struct_AW26;

typedef struct {
	unsigned timestamp : 1;
	unsigned akmSuites : 1;
	unsigned capabilities : 1;
	unsigned channel : 1;
	unsigned channelWidth : 1;
	unsigned flags : 1;
	unsigned htASel : 1;
	unsigned htAmpduParams : 1;
	unsigned htExtended : 1;
	unsigned htInfo : 1;
	unsigned htTxBf : 1;
	unsigned mcastCipher : 1;
	unsigned phyMode : 1;
	unsigned reason : 1;
	unsigned securityType : 1;
	unsigned subreason : 1;
	unsigned ucastCipher : 1;
	unsigned vhtInfo : 1;
	unsigned wpaProtocol : 1;
	unsigned isInVol : 1;
	unsigned isLinkUp : 1;
} SCD_Struct_AW27;

typedef struct {
	unsigned timestamp : 1;
	unsigned avgBitrate : 1;
	unsigned avgEstimatedBandwidth : 1;
	unsigned avgUsedBandwidth : 1;
	unsigned clearScreens : 1;
	unsigned configChanges : 1;
	unsigned cpuAvg : 1;
	unsigned duration : 1;
	unsigned forcedRefreshes : 1;
	unsigned framesSent : 1;
	unsigned reason : 1;
	unsigned resumes : 1;
	unsigned retransmitAvg : 1;
	unsigned rttAvg : 1;
	unsigned suspends : 1;
	unsigned unclearScreens : 1;
	unsigned wifiChannel : 1;
	unsigned wifiRSSI : 1;
} SCD_Struct_AW28;

typedef struct {
	unsigned timestamp : 1;
	unsigned autoLoginType : 1;
	unsigned durationNetworkNotCaptive : 1;
	unsigned durationOnNetwork : 1;
	unsigned passiveCaptivityCorrectDetection : 1;
	unsigned passiveCaptivityIncorrectDetection : 1;
	unsigned passiveCaptivitySymptom : 1;
	unsigned result : 1;
	unsigned websheetProbeCount : 1;
	unsigned websheetScrapeResult : 1;
	unsigned autoLoginFailed : 1;
	unsigned detectedNotCaptiveHandledByCNP : 1;
	unsigned handlerCNPTriggeredLogOff : 1;
	unsigned isDetectedCaptive : 1;
	unsigned passiveCaptivityDetected : 1;
	unsigned websheetScraped : 1;
	unsigned wisprDetected : 1;
} SCD_Struct_AW29;

typedef struct {
	unsigned timestamp : 1;
	unsigned bigLosses : 1;
	unsigned compressionPercent : 1;
	unsigned dacpNext : 1;
	unsigned dacpPauses : 1;
	unsigned dacpPrevious : 1;
	unsigned duration : 1;
	unsigned futileRetransmits : 1;
	unsigned glitches : 1;
	unsigned lastPackets : 1;
	unsigned lostPackets : 1;
	unsigned maxBurstLoss : 1;
	unsigned ntpOffsetAvg : 1;
	unsigned ntpOffsetMax : 1;
	unsigned ntpOffsetMin : 1;
	unsigned ntpOutliers : 1;
	unsigned ntpRTTAvg : 1;
	unsigned ntpRTTMax : 1;
	unsigned ntpRTTMin : 1;
	unsigned ntpSteps : 1;
	unsigned reason : 1;
	unsigned retransmitAvgMs : 1;
	unsigned retransmitMaxMs : 1;
	unsigned retransmitMinMs : 1;
	unsigned retransmitNotFounds : 1;
	unsigned retransmitReceives : 1;
	unsigned retransmitRetryMaxMs : 1;
	unsigned retransmitRetryMinMs : 1;
	unsigned retransmitSends : 1;
	unsigned rtpMaxSkew : 1;
	unsigned rtpSkewResets : 1;
	unsigned unrecoveredPackets : 1;
} SCD_Struct_AW30;

typedef struct {
	unsigned tcpiCellRxbytes : 1;
	unsigned tcpiCellRxpackets : 1;
	unsigned tcpiCellTxbytes : 1;
	unsigned tcpiCellTxpackets : 1;
	unsigned tcpiRxbytes : 1;
	unsigned tcpiRxduplicatebytes : 1;
	unsigned tcpiRxoutoforderbytes : 1;
	unsigned tcpiRxpackets : 1;
	unsigned tcpiSndBw : 1;
	unsigned tcpiTxbytes : 1;
	unsigned tcpiTxpackets : 1;
	unsigned tcpiTxretransmitbytes : 1;
	unsigned tcpiTxunacked : 1;
	unsigned tcpiWifiRxbytes : 1;
	unsigned tcpiWifiRxpackets : 1;
	unsigned tcpiWifiTxbytes : 1;
	unsigned tcpiWifiTxpackets : 1;
	unsigned tcpiFlags : 1;
	unsigned tcpiLastOutif : 1;
	unsigned tcpiOptions : 1;
	unsigned tcpiRcvMss : 1;
	unsigned tcpiRcvNxt : 1;
	unsigned tcpiRcvSpace : 1;
	unsigned tcpiRcvWscale : 1;
	unsigned tcpiRto : 1;
	unsigned tcpiRttbest : 1;
	unsigned tcpiRttcur : 1;
	unsigned tcpiRttvar : 1;
	unsigned tcpiSndCwnd : 1;
	unsigned tcpiSndMss : 1;
	unsigned tcpiSndNxt : 1;
	unsigned tcpiSndSbbytes : 1;
	unsigned tcpiSndSsthresh : 1;
	unsigned tcpiSndWnd : 1;
	unsigned tcpiSndWscale : 1;
	unsigned tcpiSrtt : 1;
	unsigned tcpiState : 1;
	unsigned tcpiSynrexmits : 1;
	unsigned tcpiUnused1 : 1;
	unsigned tcpiUnused2 : 1;
} SCD_Struct_AW31;
