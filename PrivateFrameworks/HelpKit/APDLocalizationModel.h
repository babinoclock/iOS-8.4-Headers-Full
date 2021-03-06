/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:01 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HelpKit/APDGenericModel.h>

@class NSArray;

@interface APDLocalizationModel : APDGenericModel {

	NSArray* _localizations;

}

@property (nonatomic,copy) NSArray * localizations;              //@synthesize localizations=_localizations - In the implementation block
-(NSArray *)localizations;
-(id)localeForLocaleString:(id)arg1 ;
-(void)setLocalizations:(NSArray *)arg1 ;
-(void)processLocalizationJSONArray:(id)arg1 ;
-(char)processLocalDataFromLocalResource;
-(void)processRequestData:(id)arg1 ;
-(id)localeList;
-(void)startRequest;
@end

