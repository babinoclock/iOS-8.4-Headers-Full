/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:53 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class GEOAltitudeManifestReserved, NSString;

@interface GEOAltitudeManifest : NSObject <NSXMLParserDelegate, GEOResourceManifestTileGroupObserver> {

	GEOAltitudeManifestReserved* _reserved;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)commonInit;
-(id)initWithoutObserver;
-(char)parseXml:(id)arg1 ;
-(id)availableRegions;
-(void)_reloadManifest;
-(void)parseManifest:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(char)isValidTourId:(unsigned long long)arg1 ;
-(id)nameForRegion:(unsigned)arg1 ;
-(id)tourIdsForRegion:(unsigned)arg1 ;
-(id)tripIdsForRegion:(unsigned)arg1 ;
-(unsigned)versionForRegion:(unsigned)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

