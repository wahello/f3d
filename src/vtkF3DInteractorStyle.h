/**
 * @class   vtkF3DInteractorStyle
 * @brief   custom interactor style based on default trackball camera
 */

#ifndef vtkF3DInteractorStyle_h
#define vtkF3DInteractorStyle_h

#include <vtkInteractorStyleTrackballCamera.h>

class vtkF3DInteractorStyle : public vtkInteractorStyleTrackballCamera
{
public:
  static vtkF3DInteractorStyle* New();
  vtkTypeMacro(vtkF3DInteractorStyle, vtkInteractorStyleTrackballCamera);

  /**
   * Handle key presses
   */
  void OnKeyPress() override;

  /**
   * Disable base class features
   */
  void OnChar() override {}

  /**
   * Handle drop files
   */
  void OnDropFiles(vtkStringArray* files) override;
};

#endif