/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUISetURLData : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * urlData; 
+(id)setURLData;
+(id)setURLDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)urlData;
-(void)setUrlData:(NSArray *)arg1 ;
@end
