#ifndef __FUZZY_LOGIC_GUI_PROJECT_SETUP_PAGE_HPP__
#define __FUZZY_LOGIC_GUI_PROJECT_SETUP_PAGE_HPP__

#include <QtGui/QMainWindow>
#include "ui_flg_project_setup_page.h"
#include "flg_engine_controller.hpp"

/*------------------------------------------------------------------------------*/

namespace FuzzyLogic{
namespace Gui{
namespace Pages{

/*------------------------------------------------------------------------------*/

class ProjectSetup
	:	public QWidget
{
	Q_OBJECT

/*------------------------------------------------------------------------------*/

public:

/*------------------------------------------------------------------------------*/

	ProjectSetup(QWidget *parent = 0);

	~ProjectSetup();

/*------------------------------------------------------------------------------*/

public:

/*------------------------------------------------------------------------------*/

	QObject * getNextButton( );

	void commitChanges(EngineController & _engine);

/*------------------------------------------------------------------------------*/

public slots:

/*------------------------------------------------------------------------------*/

	void onItemDoubleClicked ( QListWidgetItem * item );

	void onAddButton();

/*------------------------------------------------------------------------------*/

private:

/*------------------------------------------------------------------------------*/

	Ui::ProjectSetupUi m_ui;

/*------------------------------------------------------------------------------*/

};

/*------------------------------------------------------------------------------*/

} // namespace Pages
} // namespace Gui
} // namespace FuzzyLogic

/*------------------------------------------------------------------------------*/

#endif // __FUZZY_LOGIC_GUI_PROJECT_SETUP_PAGE_HPP__