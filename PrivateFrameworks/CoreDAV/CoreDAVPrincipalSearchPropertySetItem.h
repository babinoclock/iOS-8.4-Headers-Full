/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:07 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {

	NSMutableSet* _principalSearchProperties;

}

@property (nonatomic,retain) NSMutableSet * principalSearchProperties;              //@synthesize principalSearchProperties=_principalSearchProperties - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableSet *)principalSearchProperties;
-(void)addPrincipalSearchProperty:(id)arg1 ;
-(void)setPrincipalSearchProperties:(NSMutableSet *)arg1 ;
@end

