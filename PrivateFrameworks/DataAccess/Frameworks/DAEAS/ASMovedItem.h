/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMovedItem : ASItem {

	NSString* _srcMsgId;
	NSNumber* _status;
	NSString* _dstMsgId;

}
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)srcMsgId;
-(id)dstMsgId;
-(void)setDstMsgId:(id)arg1 ;
-(void)setSrcMsgId:(id)arg1 ;
@end

