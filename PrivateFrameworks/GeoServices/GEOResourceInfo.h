/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:48 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GEOResourceInfo : NSObject {

	NSString* _name;
	int _type;
	NSString* _checksum;
	NSArray* _equivalentResources;
	char _allowResumingPartialDownload;

}

@property (nonatomic,readonly) NSString * name;                                                                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int type;                                                                                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * checksum;                                                                                                        //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy) NSArray * equivalentResources;                                                                                                  //@synthesize equivalentResources=_equivalentResources - In the implementation block
@property (assign,setter=_setAllowResumingPartialDownload:,getter=_allowResumingPartialDownload,nonatomic) char allowResumingPartialDownload;              //@synthesize allowResumingPartialDownload=_allowResumingPartialDownload - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(int)type;
-(id)initWithName:(id)arg1 type:(int)arg2 checksum:(id)arg3 ;
-(NSString *)checksum;
-(void)setEquivalentResources:(NSArray *)arg1 ;
-(NSArray *)equivalentResources;
-(char)_allowResumingPartialDownload;
-(void)_setAllowResumingPartialDownload:(char)arg1 ;
@end

