/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVMultiStatusItem, NSSet;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask {

	CoreDAVMultiStatusItem* _multiStatus;
	NSSet* _propertiesToFind;

}

@property (nonatomic,retain) CoreDAVMultiStatusItem * multiStatus;              //@synthesize multiStatus=_multiStatus - In the implementation block
@property (nonatomic,retain) NSSet * propertiesToFind;                          //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
-(void)dealloc;
-(id)description;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(CoreDAVMultiStatusItem *)multiStatus;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 ;
-(NSSet *)propertiesToFind;
-(void)updateMultiStatusFromResponse;
-(id)getTotalFailureError;
-(id)successfulValueForNameSpace:(id)arg1 elementName:(id)arg2 ;
-(id)parseHints;
-(void)setMultiStatus:(CoreDAVMultiStatusItem *)arg1 ;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
@end

