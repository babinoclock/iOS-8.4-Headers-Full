/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:59 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_EditScriptData.h>

@class NSArray, NSString;

@interface _EditScriptDataArray : NSObject <_EditScriptData> {

	NSArray* _data;
	NSString* _cachedStringValue;

}

@property (nonatomic,retain) NSArray * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * cachedStringValue;              //@synthesize cachedStringValue=_cachedStringValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)EditScriptDataWithArray:(id)arg1 ;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(int)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(int)length;
-(NSArray *)data;
-(void)setData:(NSArray *)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)stringValue;
-(int)lengthOfItem:(int)arg1 ;
-(int)characterIndexForItem:(int)arg1 ;
-(int)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(char)arg2 ;
-(id)stringAtIndex:(int)arg1 ;
-(void)setCachedStringValue:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 chunkSize:(int)arg2 ;
-(NSString *)cachedStringValue;
@end

