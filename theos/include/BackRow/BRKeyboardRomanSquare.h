/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRKeyboard.h"

@class BRWaitSpinnerControl, BRControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardRomanSquare : BRKeyboard {
@private
	BRControl *_magnifyingGlassLayer;	// 32 = 0x20
	BRWaitSpinnerControl *_spinner;	// 36 = 0x24
}
- (float)_actionKeysContainerBaseGap:(id)gap resolutionScale:(float)scale;	// 0x315fee55
- (CGSize)_actionKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x315ff3e9
- (id)_keyboardDataFileName;	// 0x315fed11
- (id)_magnifyingGlass;	// 0x315fe5f1
- (id)_mainKeyRowWithKeys:(id)keys index:(int)index;	// 0x315fe6e9
- (float)_mainKeysContainerBaseGap:(id)gap resolutionScale:(float)scale;	// 0x315fee71
- (CGSize)_mainKeysContainerSize:(id)size resolutionScale:(float)scale;	// 0x315ff435
- (float)_mainKeysVerticalSpacing;	// 0x315fe569
- (CGSize)_minTextEntryControlSize:(id)size resolutionScale:(float)scale;	// 0x315feee1
- (int)_numberOfColumnsForMainKeyRowIndex:(int)mainKeyRowIndex;	// 0x315fe55d
- (int)_numberOfMainKeyRows;	// 0x315fe559
- (float)_preferredGlyphHeight:(id)height;	// 0x315fe54d
- (float)_preferredGlyphWidth:(id)width;	// 0x315fe545
- (id)_spinner;	// 0x315fe575
- (long)_startingIndexOfActionKeysInKeyRowData;	// 0x315fe571
- (float)_tabControlBaseGap:(id)gap resolutionScale:(float)scale;	// 0x315fee8d
- (void)_tagBottomKeyRow:(id)row;	// 0x315fe555
- (float)_textFieldBackgroundBaseGap:(id)gap resolutionScale:(float)scale;	// 0x315feea9
- (CGSize)_textFieldBackgroundSize:(id)size resolutionScale:(float)scale;	// 0x315ff481
- (float)_topMostUIElementGap:(id)gap resolutionScale:(float)scale;	// 0x315feec5
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x315feb49
- (id)actionKeyRows;	// 0x315fe9e5
- (id)actionKeysContainer;	// 0x315fe7f5
- (id)attributesForTextFieldLabel;	// 0x315feced
- (CGRect)backgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x315fed9d
- (id)bottomRow;	// 0x315fe531
- (BOOL)canShowLanguageSwitchButton;	// 0x315fe541
- (id)customizedTextEntryFieldControls;	// 0x315fea65
- (void)customizedTextFieldControlsWereRemoved;	// 0x315fea15
- (void)dealloc;	// 0x315fec91
- (id)focusedControlAndRow:(id *)row;	// 0x315fec11
- (CGRect)magnifyingGlassFrame:(id)frame resolutionScale:(float)scale;	// 0x315fefc5
- (id)name;	// 0x315fe521
- (void)setFocusToDefaultSwitchKeyboardGlyph:(id)defaultSwitchKeyboardGlyph;	// 0x315fe749
- (CGRect)spinnerFrame:(id)frame resolutionScale:(float)scale;	// 0x315ff169
- (void)startSpinning;	// 0x315feb11
- (void)stopSpinning;	// 0x315fead9
- (CGRect)tabControlFrame:(id)frame resolutionScale:(float)scale;	// 0x315ff051
- (CGRect)textFieldBackgroundFrame:(id)frame resolutionScale:(float)scale;	// 0x315fed29
- (CGRect)textFieldFrame:(id)frame resolutionScale:(float)scale;	// 0x315ff23d
@end

