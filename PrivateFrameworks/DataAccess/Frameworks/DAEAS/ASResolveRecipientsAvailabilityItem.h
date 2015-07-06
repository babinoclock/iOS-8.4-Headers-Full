/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem {

	NSNumber* _easStatus;
	NSString* _mergedFreeBusy;

}

@property (nonatomic,retain) NSNumber * easStatus;                   //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,retain) NSString * mergedFreeBusy;              //@synthesize mergedFreeBusy=_mergedFreeBusy - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)easStatus;
-(NSString *)mergedFreeBusy;
-(void)setMergedFreeBusy:(NSString *)arg1 ;
-(void)setEASStatus:(id)arg1 ;
@end

