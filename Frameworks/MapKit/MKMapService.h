/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray, NSLock;

@interface MKMapService : NSObject {

	NSArray* _activeInputModeLanguages;
	NSLock* _activeInputModesLock;

}
+(id)sharedService;
-(id)ticketForReverseGeocodeCoordinate:(SCD_Struct_MK1)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
-(id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2 providerID:(id)arg3 ;
-(void)_invalidateActiveInputModeLanguages;
-(id)defaultTraitsWithTraits:(id)arg1 ;
-(id)_activeInputModeLanguages;
-(id)_ticketForReverseGeocodeCoordinate:(SCD_Struct_MK1)arg1 includeEntryPoints:(char)arg2 includeETA:(char)arg3 traits:(id)arg4 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(SCD_Struct_MK1)arg1 traits:(id)arg2 ;
-(id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2 ;
-(void)submitUsageForTraitsWithAction:(int)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3 ;
-(void)_mapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 mapItemForStartDirectionsSearchInput:(id)arg3 mapitemForEndDirectionsSearchInput:(id)arg4 traits:(id)arg5 ;
-(id)mapItemsForUpdatedPlacesInResolution:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(char)arg3 traits:(id)arg4 ;
-(id)defaultTraits;
-(void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(char)arg2 traits:(id)arg3 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 traits:(id)arg6 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 includeETA:(char)arg4 traits:(id)arg5 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 coordinate:(SCD_Struct_MK1)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(void)submitUsageForTraits:(id)arg1 ;
-(id)ticketForMUIDs:(id)arg1 includeETA:(char)arg2 traits:(id)arg3 ;
@end

