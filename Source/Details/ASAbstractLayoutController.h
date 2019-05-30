//
//  ASAbstractLayoutController.h
//  Texture
//
//  Copyright (c) Facebook, Inc. and its affiliates.  All rights reserved.
//  Changes after 4/13/2017 are: Copyright (c) Pinterest, Inc.  All rights reserved.
//  Licensed under Apache 2.0: http://www.apache.org/licenses/LICENSE-2.0
//

#import <AsyncDisplayKit/ASLayoutController.h>
#import <AsyncDisplayKit/ASBaseDefines.h>

NS_ASSUME_NONNULL_BEGIN

AS_EXTERN ASDirectionalScreenfulBuffer ASDirectionalScreenfulBufferHorizontal(ASScrollDirection scrollDirection, ASRangeTuningParameters rangeTuningParameters);

AS_EXTERN ASDirectionalScreenfulBuffer ASDirectionalScreenfulBufferVertical(ASScrollDirection scrollDirection, ASRangeTuningParameters rangeTuningParameters);

AS_EXTERN CGRect CGRectExpandToRangeWithScrollableDirections(CGRect rect, ASRangeTuningParameters tuningParameters, ASScrollDirection scrollableDirections, ASScrollDirection scrollDirection);

@interface ASAbstractLayoutController : NSObject <ASLayoutController>

@end

NS_ASSUME_NONNULL_END
