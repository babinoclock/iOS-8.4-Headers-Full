/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * restrictedApps; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getRestrictedAppsResponse;
+(id)getRestrictedAppsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)restrictedApps;
-(void)setRestrictedApps:(NSArray *)arg1 ;
@end

