/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSString, IKTextElement, IKOrdinalElement, IKImageElement, NSArray, IKTextBadgeAttachment, IKButtonElement, IKVideoElement;

@interface IKColumnItemLockupElement : IKViewElement

@property (nonatomic,copy,readonly) NSString * columnItemType; 
@property (nonatomic,retain,readonly) IKTextElement * title; 
@property (nonatomic,retain,readonly) IKTextElement * subtitle; 
@property (nonatomic,retain,readonly) IKTextElement * secondarySubtitle; 
@property (nonatomic,retain,readonly) IKTextElement * descriptionText; 
@property (nonatomic,retain,readonly) IKOrdinalElement * ordinal; 
@property (nonatomic,readonly) IKImageElement * image; 
@property (nonatomic,readonly) NSArray * images; 
@property (nonatomic,readonly) IKTextBadgeAttachment * titleBadge; 
@property (nonatomic,readonly) IKTextBadgeAttachment * subtitleBadge; 
@property (nonatomic,retain,readonly) IKButtonElement * button; 
@property (nonatomic,retain,readonly) IKVideoElement * video; 
@property (nonatomic,retain,readonly) NSArray * textElements; 
@property (nonatomic,readonly) char hasSeparator; 
@property (nonatomic,readonly) char isWatchlisted; 
@property (nonatomic,readonly) char onlyVisibleOnColumnHighlight; 
-(IKButtonElement *)button;
-(IKTextElement *)title;
-(NSArray *)images;
-(IKImageElement *)image;
-(IKTextElement *)subtitle;
-(IKTextElement *)descriptionText;
-(NSString *)columnItemType;
-(void)_computeTitle:(id*)arg1 subtitle:(id*)arg2 secondarySubtitle:(id*)arg3 unstyledTextElements:(id*)arg4 ;
-(IKTextElement *)secondarySubtitle;
-(IKOrdinalElement *)ordinal;
-(IKTextBadgeAttachment *)titleBadge;
-(IKTextBadgeAttachment *)subtitleBadge;
-(NSArray *)textElements;
-(char)isWatchlisted;
-(char)onlyVisibleOnColumnHighlight;
-(char)hasSeparator;
-(IKVideoElement *)video;
@end

