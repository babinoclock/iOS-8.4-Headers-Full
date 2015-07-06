/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:42 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDString, EDReference;

@interface EDHyperlink : NSObject {

	EDString* mPath;
	EDString* mDosPath;
	EDString* mDescriptionText;
	EDString* mTextMark;
	EDString* mToolTip;
	EDReference* mReference;
	int mType;

}
+(id)hyperlink;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)path;
-(void)setPath:(id)arg1 ;
-(void)setDescriptionText:(id)arg1 ;
-(id)descriptionText;
-(void)setDosPath:(id)arg1 ;
-(void)setTextMark:(id)arg1 ;
-(void)setReference:(id)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(id)dosPath;
-(id)textMark;
-(id)toolTip;
-(id)reference;
@end

