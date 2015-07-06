/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:24 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * firstTeam; 
@property (nonatomic,retain) SAUIDecoratedText * secondTeam; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)competingTeamPlayDetailHeaderItem;
+(id)competingTeamPlayDetailHeaderItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIDecoratedText *)firstTeam;
-(void)setFirstTeam:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)secondTeam;
-(void)setSecondTeam:(SAUIDecoratedText *)arg1 ;
@end

