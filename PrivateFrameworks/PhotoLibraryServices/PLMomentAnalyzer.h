/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLMomentGenerationDataManagement, GEOMapItemPrivate;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, PLMomentAnalyzerWorkThread, NSMutableOrderedSet, NSMutableArray, NSMutableSet, PLMomentAnalyzerQueue, NSDateFormatter, NSDictionary, CLLocation, NSString, NSOrderedSet, NSDate;

@interface PLMomentAnalyzer : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	PLMomentAnalyzerWorkThread* _geoWorkThread;
	unsigned _mode;
	double _analysisStartTime;
	char _delayedSavePending;
	unsigned _objectUpdatesSinceSave;
	NSMutableOrderedSet* _pendingGEORequests;
	NSMutableArray* _activeGEORequests;
	NSMutableSet* _processingMomentUuids;
	PLMomentAnalyzerQueue* _megaMomentProcessingQueue;
	PLMomentAnalyzerQueue* _yearMomentProcessingQueue;
	NSDateFormatter* _shortDateFormatter;
	NSDateFormatter* _dayOfTheWeekDateFormatter;
	id<PLMomentGenerationDataManagement> _momentDataManager;
	char _analyzingAllMoments;
	char _skippedMomentsDuringAnalysis;
	char _passSuccess;
	unsigned _errorState;
	int _errorBackoffLevel;
	int _triesAtCurrentBackoffLevel;
	char _networkObservingReachability;
	char _needToUpdateInvalidMomentsWhenPossible;
	NSDictionary* _homeAddressDictionary;
	CLLocation* _homeLocation;
	id<GEOMapItemPrivate> _homeMapItem;
	NSString* _languageAndLocale;
	NSString* _lastGeoProviderId;
	NSOrderedSet* _defaultDominantGeoOrderingForMoment;
	NSOrderedSet* _defaultSecondaryLocationGeoOrderingForMoment;
	NSOrderedSet* _defaultDominantGeoOrderingForMegaMoment;
	NSOrderedSet* _defaultSecondaryLocationGeoOrderingForMegaMoment;
	NSOrderedSet* _defaultSecondaryGeoOrderingForYear;
	double _lastNetworkForcedAbortTime;
	double _timeToWaitBeforeNextRequest;
	double _lastRevGeoRequestTime;
	NSDate* _lastGeoVersionFileFetchDate;
	unsigned _lastGeoVersionFileVersion;
	NSDictionary* _serverVersionInfo;
	double _lastServerVersionInfoFetchAttemptTime;
	unsigned _currentRevGeoServerVersionNum;
	char _pendingServerVersionInfoFetch;
	char _addCountyIfNeeded;
	char _noResultErrorIsSuccess;
	double _revGeoServerVersionInfoFetchNewVersionInterval;
	NSString* _revGeoServerVersionInfoURL;
	NSString* _currentProviderId;
	char _momentAnalysisPaused;
	char _throttlesCollectionListAnalysis;
	double _lastRevGeoURLFetchAttemptTime;
	unsigned _revGeoURLFetchAttemptCount;
	id<PLMomentGenerationDataManagement> _momentGenerationDataManager;

}

@property (assign,nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager;              //@synthesize momentGenerationDataManager=_momentGenerationDataManager - In the implementation block
@property (assign) char throttlesCollectionListAnalysis; 
@property (nonatomic,retain,readonly) id<PLMomentGenerationDataManagement> _momentDataManager; 
@property (nonatomic,retain,readonly) CLLocation * _homeLocation; 
-(void)dealloc;
-(id)init;
-(void)pauseMomentAnalysis;
-(void)resumeMomentAnalysis;
-(void)_processNextTransaction;
-(void)updateInfoForAllMoments;
-(void)setMomentGenerationDataManager:(id<PLMomentGenerationDataManagement>)arg1 ;
-(void)setThrottlesCollectionListAnalysis:(char)arg1 ;
-(void)startAnalyzer;
-(void)_networkReachabilityDidChange:(char)arg1 ;
-(void)addressBookChanged;
-(void)_updateInformationForGeoProviderIfNeededOnWorkQueue;
-(void)_fetchServerVersionInfo;
-(id<PLMomentGenerationDataManagement>)momentGenerationDataManager;
-(void)_finalizeInitOnWorkQueue;
-(void)_updateDateFormattersForLocale:(id)arg1 ;
-(id)_locationFromDictionary:(id)arg1 ;
-(void)_saveGlobalMetadata;
-(char)_updateHomeAddressIfNeeded;
-(char)_updateLanguageIfNeeded;
-(void)_countryCodeChanged:(id)arg1 ;
-(void)_updateRevGeoServerFetchInfoConfig;
-(void)_updateInformationForGeoProviderIfNeeded;
-(void)_updateCurrentProviderId;
-(void)_updateInfoForAllMomentsWithReAnalyzeType:(unsigned)arg1 ;
-(char)_loadServerVersionInfo;
-(void)_checkForNewServerVersionInfoIfNeeded;
-(void)_runBlockOnWorkQueue:(/*^block*/id)arg1 ;
-(char)setVersionInfoURLIfAvailable:(id)arg1 ;
-(void)_updateLocalServerVersionInfo:(id)arg1 ;
-(id)_currentProviderId;
-(void)_updateErrorStateWithSuccess:(char)arg1 errorType:(unsigned)arg2 ;
-(void)_startObservingReachabilityChanges;
-(id<PLMomentGenerationDataManagement>)_momentDataManager;
-(void)_stopObservingReachabilityChanges;
-(unsigned)_errorTypeForError:(id)arg1 ;
-(id)_dictionaryFromLocation:(id)arg1 ;
-(void)_updateHomeLocation;
-(void)_updateCurrentProviderIdWithCountryCode:(id)arg1 ;
-(void)_forwardGeocodeAddressDictionary:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_reAnalyzeCachedDataAndProcessOnlyHomeChanges:(char)arg1 ;
-(void)_forwardGeocodeAddressDictionaryOnGeoThread:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_setErrorState:(unsigned)arg1 ;
-(void)_finishedProcessingMomentWithUuid:(id)arg1 withSuccess:(char)arg2 ;
-(char)_isNetworkReachable;
-(void)_resetErrorState;
-(char)_startingToProcessMomentWithUuid:(id)arg1 ;
-(void)_addRevGeoPlacesAndUserTitlesFromAssets:(id)arg1 toPlacesArray:(id)arg2 toMomentTitles:(id)arg3 toCollectionTitles:(id)arg4 ;
-(void)_updateAllInfoInCompoundNameInfo:(id)arg1 andCompoundSecondaryNameInfo:(id)arg2 withRevGeoPlaces:(id)arg3 includeHome:(char)arg4 primaryGeoOrderingSet:(id)arg5 secondaryGeoOrderingSet:(id)arg6 ;
-(id)_userSuppliedTitlesForCountedSet:(id)arg1 ;
-(char)_updateHomeLocationInRevGeoInfo:(id)arg1 forLocation:(id)arg2 withHomeLocation:(id)arg3 ;
-(void)_finalizeDataForMoment:(id)arg1 withMomentLocationInfo:(id)arg2 success:(char)arg3 ;
-(void)_saveDataIfReachedObjectChangeThreshold;
-(void)_finishedGEORequestInfo:(id)arg1 withSuccess:(char)arg2 errorType:(unsigned)arg3 ;
-(void)_refreshAllObjectsIfPossibleWithManager:(id)arg1 ;
-(void)_saveNow;
-(void)_runOnWorkQueueAferSeconds:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)_analysisDidComplete:(char)arg1 ;
-(void)_saveDataIfNeededAfterTimeDiff:(double)arg1 ;
-(void)_processPendingGEORequests;
-(void)_processMegaMomentLists;
-(void)_scheduleCollectionListAnalysisThrottleTimerIfNeeded;
-(void)_processYearMomentLists;
-(void)_analysisComplete;
-(void)_processNextAnalysisTransaction;
-(void)_waitForReachability;
-(void)_processGEORequestWithRequestInfo:(id)arg1 ;
-(unsigned)_processMegaMomentList:(id)arg1 ;
-(id)_updateDominantInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 defaultGeoOrderingSet:(id)arg3 includeAllPlaces:(char)arg4 includeHome:(char)arg5 homeAtEnd:(char)arg6 outOtherNonDominantPlaces:(id)arg7 outOrdersCheckedOrUsed:(id)arg8 outOrderUsed:(unsigned*)arg9 outUsedHome:(char*)arg10 ;
-(unsigned)_processYearMomentList:(id)arg1 ;
-(void)_setLocationDataValidForMomentId:(id)arg1 ;
-(id)_geoLocationForCoordinate:(SCD_Struct_PL10)arg1 date:(id)arg2 ;
-(void)_enqueueReverseGeocodeMomentWithRequestInfo:(id)arg1 shouldFilterIfInProgress:(char)arg2 ;
-(void)_updateSecondaryInfoInCompoundNameInfo:(id)arg1 withRevGeoPlaces:(id)arg2 primaryCompoundNameInfo:(id)arg3 defaultGeoOrderingSet:(id)arg4 dominantPlaces:(id)arg5 otherNonDominantPlaces:(id)arg6 ordersCheckedOrUsed:(id)arg7 dominantOrder:(unsigned)arg8 usedHome:(char)arg9 ;
-(unsigned)_geoOrderInPrioritySet:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_addOrUpdateNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 ;
-(id)_dominantPlacesInPlaceInfoArray:(id)arg1 orderType:(unsigned)arg2 totalPlaceCount:(unsigned)arg3 includeAllPlaces:(char)arg4 includeHome:(char)arg5 homeAtEnd:(char)arg6 atLastLevel:(char)arg7 outOtherNonDominantPlaces:(id)arg8 ;
-(id)_resetAndSortedNameInfoArray:(id)arg1 homeAtEnd:(char)arg2 ;
-(id)_localizedNamesForNameInfoArray:(id)arg1 namesUsed:(id)arg2 includeHome:(char)arg3 outAddedHome:(char*)arg4 ;
-(id)_suffixForGeoPlace:(id)arg1 afterOrderType:(unsigned)arg2 homePlace:(id)arg3 ;
-(id)_suffixForNameInfoArray:(id)arg1 afterOrderType:(unsigned)arg2 ;
-(char)_canProcessMoments;
-(CLLocation *)_homeLocation;
-(char)_markInvalidLowQualityAssetsInMoment:(id)arg1 withCurrentProviderId:(id)arg2 ;
-(char)_markInvalidOutOfDateAssetsInMoment:(id)arg1 forCurrentCountryVersionMap:(id)arg2 withCurrentProviderId:(id)arg3 ;
-(char)_shouldProcessMoments:(id)arg1 ;
-(char)updateInfoForMoments:(id)arg1 invalidOnly:(char)arg2 ;
-(char)updateInfoForMegaMomentLists:(id)arg1 ;
-(char)updateInfoForYearMomentLists:(id)arg1 ;
-(void)_setMomentAnalysisPaused:(char)arg1 ;
-(void)_reverseGeocodeMoment:(id)arg1 shouldFilterIfInProgress:(char)arg2 invalidOnly:(char)arg3 ;
-(void)updateInfoForInvalidMomentsIfNeeded;
-(id)_compactPlaceDescriptionForMapItem:(id)arg1 ;
-(unsigned)_indexForGeoOrder:(unsigned)arg1 inPrioritySet:(id)arg2 ;
-(unsigned)_significantPlaceCountInMap:(id)arg1 ;
-(id)_simpleNamesForNameInfoArray:(id)arg1 ;
-(char)updateInfoForMomentWithMomentId:(id)arg1 fromOnDemandRequest:(char)arg2 ;
-(char)updateInfoForMomentListWithMomentListId:(id)arg1 ;
-(char)throttlesCollectionListAnalysis;
@end

