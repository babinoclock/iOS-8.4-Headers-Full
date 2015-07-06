/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:37 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface VoiceDialNameDataSource : NSObject {

	unsigned _nameTypeMask;
	char _compositeNamesOnly;

}
+(id)nameDataSourceForLanguageIdentifier:(id)arg1 ;
+(id)_nameDataSourceByLanguageMap;
-(unsigned)nameTypes;
-(int)matchingNameType:(id)arg1 fromTypes:(unsigned)arg2 forPerson:(void*)arg3 ;
-(unsigned)indexOfMainNameOfType:(int)arg1 ;
-(unsigned)personNameCount;
-(char)getNth:(unsigned)arg1 name:(id*)arg2 phoneticName:(id*)arg3 ofType:(int)arg4 nameIndex:(unsigned*)arg5 forPerson:(void*)arg6 ;
-(char)getName:(id*)arg1 phoneticName:(id*)arg2 atIndex:(unsigned)arg3 forPerson:(void*)arg4 ;
-(int)typeOfNameAtIndex:(unsigned)arg1 ;
-(unsigned)countOfNamesOfType:(int)arg1 ;
-(char)useCompositeNamesOnly;
-(void)setUseCompositeNamesOnly:(char)arg1 ;
@end

