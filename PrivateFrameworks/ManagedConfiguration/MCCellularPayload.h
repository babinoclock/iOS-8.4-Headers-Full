/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:17 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload {

	MCAPNConfiguration* _attachAPN;
	NSArray* _APNs;

}

@property (nonatomic,retain) MCAPNConfiguration * attachAPN;              //@synthesize attachAPN=_attachAPN - In the implementation block
@property (nonatomic,retain) NSArray * APNs;                              //@synthesize APNs=_APNs - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)description;
-(id)subtitle2Label;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)payloadDescriptionKeyValueSections;
-(id)installationWarnings;
-(id)subtitle2Description;
-(MCAPNConfiguration *)attachAPN;
-(NSArray *)APNs;
-(id)attachAPNConfigurationLabel;
-(id)APNsLabel;
-(id)APNConfigurationDescription;
-(id)APNsDescription;
-(void)setAttachAPN:(MCAPNConfiguration *)arg1 ;
-(void)setAPNs:(NSArray *)arg1 ;
@end

