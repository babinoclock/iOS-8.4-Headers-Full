/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOLocationShiftFunctionResponse, GEOLocationShiftFunctionRequest, NSLock, NSMutableArray;

@interface GEOLocationShifter : NSObject {

	GEOLocationShiftFunctionResponse* _shiftFunction;
	char _isRequestingShiftFunction;
	GEOLocationShiftFunctionRequest* _shiftRequest;
	NSLock* _lock;
	NSMutableArray* _locationsToShift;

}

@property (nonatomic,readonly) char locationShiftEnabled; 
@property (nonatomic,retain) GEOLocationShiftFunctionResponse * shiftFunction;              //@synthesize shiftFunction=_shiftFunction - In the implementation block
@property (nonatomic,retain) GEOLocationShiftFunctionRequest * shiftRequest;                //@synthesize shiftRequest=_shiftRequest - In the implementation block
-(void)dealloc;
-(id)init;
-(void)_countryProvidersDidChange:(id)arg1 ;
-(void)setShiftRequest:(GEOLocationShiftFunctionRequest *)arg1 ;
-(void)setShiftFunction:(GEOLocationShiftFunctionResponse *)arg1 ;
-(void)_shiftAndReturnLocations;
-(void)_sendErrorForLocations:(id)arg1 ;
-(char)_shiftLocation:(id)arg1 ;
-(char)locationShiftEnabled;
-(GEOLocationShiftFunctionResponse *)shiftFunction;
-(void)_requestShiftFunctionForLocation:(SCD_Struct_GE15)arg1 accuracy:(double)arg2 ;
-(void)shiftCoordinate:(SCD_Struct_GE15)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)shiftCoordinate:(SCD_Struct_GE15)arg1 accuracy:(double)arg2 withCompletionHandler:(/*^block*/id)arg3 mustGoToNetworkCallback:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 callbackQueue:(id)arg6 ;
-(char)shiftCoordinate:(SCD_Struct_GE15)arg1 accuracy:(double)arg2 shiftedCoordinate:(SCD_Struct_GE15*)arg3 shiftedAccuracy:(double*)arg4 ;
-(GEOLocationShiftFunctionRequest *)shiftRequest;
@end

