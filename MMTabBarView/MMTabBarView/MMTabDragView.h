//
//  MMTabDragView.h
//  MMTabBarView
//
//  Created by Kent Sutherland on 6/17/07.
//  Copyright 2007 Kent Sutherland. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MMTabDragView : NSView
{
	CGFloat _alpha;
	NSImage *_image;
	NSImage *_alternateImage;
}

@property (assign) CGFloat alpha;
@property (strong) NSImage *image;
@property (strong) NSImage *alternateImage;

@end
