/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:26 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) char dryRun; 
@property (assign,nonatomic) char failOnSiriDisconnectWarnings; 
+(id)setValue;
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)dryRun;
-(void)setDryRun:(char)arg1 ;
-(char)failOnSiriDisconnectWarnings;
-(void)setFailOnSiriDisconnectWarnings:(char)arg1 ;
@end

