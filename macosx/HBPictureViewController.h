/*  HBPictureViewController.h $

 This file is part of the HandBrake source code.
 Homepage: <http://handbrake.fr/>.
 It may be used under the terms of the GNU General Public License. */

#import <Cocoa/Cocoa.h>

@class HBPicture;

@interface HBPictureViewController : NSViewController

@property (nonatomic, readwrite, weak) HBPicture *picture;

@end
