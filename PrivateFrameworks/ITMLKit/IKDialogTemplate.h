/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSArray;

@interface IKDialogTemplate : IKViewElement

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) NSArray * buttons; 
-(unsigned)type;
-(IKTextElement *)title;
-(NSArray *)buttons;
-(IKTextElement *)descriptionText;
@end

