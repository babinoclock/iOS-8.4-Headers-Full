/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSString, IKImageElement;

@interface IKButtonElement : IKViewElement

@property (nonatomic,readonly) int buttonType; 
@property (nonatomic,retain,readonly) IKTextElement * text; 
@property (nonatomic,copy,readonly) NSString * confirmationText; 
@property (nonatomic,retain,readonly) IKImageElement * image; 
-(IKTextElement *)text;
-(IKImageElement *)image;
-(int)buttonType;
-(NSString *)confirmationText;
@end

