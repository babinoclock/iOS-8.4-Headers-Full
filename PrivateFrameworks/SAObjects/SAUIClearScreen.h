/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:21 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * initialView; 
+(id)clearScreen;
+(id)clearScreenWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)_afui_isUsefulUserResultCommand;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(SAAceView *)initialView;
-(void)setInitialView:(SAAceView *)arg1 ;
@end

