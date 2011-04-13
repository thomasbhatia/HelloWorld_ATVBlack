/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"

@class NSMutableArray;

@interface BRMediaPlayer : NSObject {
@private
	NSMutableArray *_stateStack;	// 4 = 0x4
}
@property(assign) long currentChapterIndex;	// G=0x31636091; S=0x31636089; converted property
@property(assign) BOOL disablePlatformFilters;	// G=0x316360e9; S=0x316360e5; converted property
@property(assign) double elapsedTime;	// G=0x31636049; S=0x31636045; converted property
@property(assign) BOOL muted;	// G=0x31636151; S=0x3163614d; converted property
@property(retain) id playerSpecificOptions;	// G=0x31636161; S=0x3163615d; converted property
@property(assign) int repeatMode;	// G=0x31636135; S=0x31636131; converted property
@property(assign) long selectedAudioTrackID;	// G=0x31636121; S=0x3163611d; converted property
@property(assign) long selectedSubtitleTrackID;	// G=0x3163610d; S=0x31636109; converted property
@property(assign) BOOL shufflePlayback;	// G=0x31636129; S=0x31636125; converted property
@property(assign) BOOL skipExplicit;	// G=0x31636141; S=0x3163613d; converted property
@property(assign) double startTime;	// G=0x31636061; S=0x3163605d; converted property
@property(assign) double stopTime;	// G=0x31636055; S=0x31636051; converted property
@property(assign) double virtualChapterMark;	// G=0x31636079; S=0x31636075; converted property
@property(assign) float volume;	// G=0x31636441; S=0x31636159; converted property
+ (BOOL)allowMultiplePlayers;	// 0x31636009
+ (id)contentTypes;	// 0x31636005
+ (BOOL)handlesVideoForType:(id)type;	// 0x3163600d
- (id)init;	// 0x3163653d
- (void)_checkPlayerMedia:(id)media;	// 0x31636229
- (void)_invalidateAsset:(id)asset;	// 0x31636265
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x3163601d
- (BOOL)attemptAuthorizationWithError:(id *)error;	// 0x3163646d
- (id)audioTrackIDs;	// 0x31636115
- (BRTimeRange)bufferedRange;	// 0x316360c5
- (float)bufferingProgress;	// 0x316360dd
- (long)chapterCount;	// 0x3163608d
- (id)chapterImageProxyForIndex:(long)index;	// 0x316360ad
- (long)chapterIndexForTime:(double)time;	// 0x31636095
- (BOOL)chapterIsPlayable:(long)playable;	// 0x316360a9
- (id)chapterTimes;	// 0x31636071
- (id)chapterTitleForIndex:(long)index;	// 0x3163609d
- (void)clearStack;	// 0x316362c1
- (id)collection;	// 0x31636021
- (BOOL)cueMediaWithError:(id *)error;	// 0x316364a9
// converted property getter: - (long)currentChapterIndex;	// 0x31636091
- (id)currentChapterTitle;	// 0x31636099
- (id)currentVideoFrame;	// 0x316360f5
- (void)dealloc;	// 0x315aa9c1
- (id)debugStringForState:(int)state;	// 0x31636165
// converted property getter: - (BOOL)disablePlatformFilters;	// 0x316360e9
- (id)displayStringForAudioTrackID:(long)audioTrackID;	// 0x31636119
- (id)displayStringForSubtitleTrackID:(long)subtitleTrackID;	// 0x31636105
- (double)duration;	// 0x3163603d
// converted property getter: - (double)elapsedTime;	// 0x31636049
- (double)endTimeForChapter:(long)chapter;	// 0x316360b9
- (BOOL)hasChapterPictures;	// 0x316360a5
- (BOOL)hasChapters;	// 0x3163606d
- (BOOL)hasRealChapters;	// 0x316360a1
- (double)keyframeTimeNearTime:(double)time searchForwards:(BOOL)forwards;	// 0x316360f9
- (id)media;	// 0x315a05a9
- (long)mediaIndex;	// 0x31636029
// converted property getter: - (BOOL)muted;	// 0x31636151
- (void)nextChapter;	// 0x31636081
- (void)nextMedia;	// 0x31636149
- (int)peekState;	// 0x31636365
// converted property getter: - (id)playerSpecificOptions;	// 0x31636161
- (int)playerState;	// 0x31636031
- (BOOL)playingVisualContent;	// 0x316360ed
- (int)popState;	// 0x316362e9
- (void)previousChapter;	// 0x31636085
- (void)previousMedia;	// 0x31636145
- (void)pushState:(int)state;	// 0x316363c5
// converted property getter: - (int)repeatMode;	// 0x31636135
- (void)resetToBeginning;	// 0x31636069
- (BOOL)reverseTouchSwipeBehavior;	// 0x31636015
// converted property getter: - (long)selectedAudioTrackID;	// 0x31636121
// converted property getter: - (long)selectedSubtitleTrackID;	// 0x3163610d
// converted property setter: - (void)setCurrentChapterIndex:(long)index;	// 0x31636089
// converted property setter: - (void)setDisablePlatformFilters:(BOOL)filters;	// 0x316360e5
// converted property setter: - (void)setElapsedTime:(double)time;	// 0x31636045
- (BOOL)setMediaAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x31636501
- (BOOL)setMediaAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x31636019
// converted property setter: - (void)setMuted:(BOOL)muted;	// 0x3163614d
// converted property setter: - (void)setPlayerSpecificOptions:(id)options;	// 0x3163615d
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x31636131
// converted property setter: - (void)setSelectedAudioTrackID:(long)anId;	// 0x3163611d
// converted property setter: - (void)setSelectedSubtitleTrackID:(long)anId;	// 0x31636109
// converted property setter: - (void)setShufflePlayback:(BOOL)playback;	// 0x31636125
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x3163613d
// converted property setter: - (void)setStartTime:(double)time;	// 0x3163605d
- (BOOL)setState:(int)state error:(id *)error;	// 0x3163602d
// converted property setter: - (void)setStopTime:(double)time;	// 0x31636051
// converted property setter: - (void)setVirtualChapterMark:(double)mark;	// 0x31636075
// converted property setter: - (void)setVolume:(float)volume;	// 0x31636159
// converted property getter: - (BOOL)shufflePlayback;	// 0x31636129
// converted property getter: - (BOOL)skipExplicit;	// 0x31636141
// converted property getter: - (double)startTime;	// 0x31636061
- (double)startTimeForChapter:(long)chapter;	// 0x316360b1
// converted property getter: - (double)stopTime;	// 0x31636055
- (BOOL)stopsActiveAudioPlayer;	// 0x31636011
- (id)subtitleTrackIDs;	// 0x31636101
- (BOOL)supportsBufferedRange;	// 0x316360c1
- (BOOL)supportsMultipleTrickSpeeds;	// 0x31636035
- (BOOL)supportsRepeatModes;	// 0x31636139
- (BOOL)supportsShufflePlayback;	// 0x3163612d
- (BOOL)supportsTrickPlay;	// 0x31636039
- (BOOL)supportsVolumeControl;	// 0x31636155
- (int)swapState:(int)state;	// 0x31636395
- (id)trackList;	// 0x31636025
// converted property getter: - (double)virtualChapterMark;	// 0x31636079
- (id)visuals;	// 0x316360f1
// converted property getter: - (float)volume;	// 0x31636441
@end
