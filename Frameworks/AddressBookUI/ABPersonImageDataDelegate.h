/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonImageDataDelegate
@optional
-(char)shouldUseSourceTypeSpecificStrings;

@required
-(id)writablePeople;
-(char)hasImageDataForPerson:(id)arg1;
-(id)personForImageData;
-(id)imageDataWithFormat:(int)arg1 cropRect:(CGRect*)arg2 forPerson:(id)arg3;
-(void)setPersonForImageData:(id)arg1;
-(void)refreshImageData;
-(void)removeImageDataForPerson:(id)arg1;
-(void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(CGRect)arg3 forPerson:(id)arg4;
-(void)reloadImageData;
-(void)resetImageData;
-(void)imageWillSave;
-(char)hasImageChanges;
-(void)updateRecordImages;
-(char)didChangePreferredPersonForImage;
-(id)people;

@end

