/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAUIRepeatIt : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * contingency; 
+(id)repeatIt;
+(id)repeatItWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)_afui_isUsefulUserResultCommand;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)contingency;
-(void)setContingency:(NSString *)arg1 ;
@end

