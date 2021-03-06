/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEODirectionsProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireDirectionsProvider : GEODirectionsProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	char _cancelled;

}

@property (nonatomic,retain) GEORequester * requester;              //@synthesize requester=_requester - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(GEORequester *)requester;
-(void)setRequester:(GEORequester *)arg1 ;
-(void)startProviderWithRequest:(id)arg1 ;
-(void)cancelProviderRequest;
-(void)cleanupRequester;
@end

