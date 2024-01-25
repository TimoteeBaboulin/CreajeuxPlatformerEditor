#pragma once

namespace SampleSFML {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlatformEditor
	/// </summary>
	public ref class PlatformEditor : public System::Windows::Forms::Form
	{
	public:
		PlatformEditor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PlatformEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ tabListMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ fileTabMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gameTabMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ levelTabMenuItem;
	protected:

	protected:



	private: System::Windows::Forms::GroupBox^ fileManagerGroupBox;
	private: System::Windows::Forms::Button^ loadLevelButton;

	private: System::Windows::Forms::Button^ saveLevelButton;
	private: System::Windows::Forms::Label^ saveLevelStatusLabel;
	private: System::Windows::Forms::Label^ loadLevelStatusLabel;
	private: System::Windows::Forms::GroupBox^ gameParametersGroupBox;
	private: System::Windows::Forms::PictureBox^ playerSpritePixtureBox;
	private: System::Windows::Forms::GroupBox^ levelObstaclesGroupBox;
	private: System::Windows::Forms::PictureBox^ levelEditorPictureBox;
	private: System::Windows::Forms::GroupBox^ tileEditorGroupBox;
	private: System::Windows::Forms::Panel^ platformPanel;

	private: System::Windows::Forms::PictureBox^ objectPictureBox;
	private: System::Windows::Forms::Label^ platformSpeedLabel;

	private: System::Windows::Forms::Label^ platformLengthLabel;
	private: System::Windows::Forms::Label^ platformObstaclesLabel;


	private: System::Windows::Forms::Label^ platformAxisLabel;

	private: System::Windows::Forms::Label^ platformStabilityLabel;
	private: System::Windows::Forms::Label^ platformHeightLabel;
	private: System::Windows::Forms::Label^ platformPositionLabel;
	private: System::Windows::Forms::Label^ platformShapeLabel;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlatformEditor::typeid));
			this->tabListMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileTabMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gameTabMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->levelTabMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fileManagerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->loadLevelStatusLabel = (gcnew System::Windows::Forms::Label());
			this->saveLevelStatusLabel = (gcnew System::Windows::Forms::Label());
			this->loadLevelButton = (gcnew System::Windows::Forms::Button());
			this->saveLevelButton = (gcnew System::Windows::Forms::Button());
			this->gameParametersGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->playerSpritePixtureBox = (gcnew System::Windows::Forms::PictureBox());
			this->levelObstaclesGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->tileEditorGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->platformPanel = (gcnew System::Windows::Forms::Panel());
			this->objectPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->levelEditorPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->platformLengthLabel = (gcnew System::Windows::Forms::Label());
			this->platformSpeedLabel = (gcnew System::Windows::Forms::Label());
			this->platformAxisLabel = (gcnew System::Windows::Forms::Label());
			this->platformObstaclesLabel = (gcnew System::Windows::Forms::Label());
			this->platformHeightLabel = (gcnew System::Windows::Forms::Label());
			this->platformStabilityLabel = (gcnew System::Windows::Forms::Label());
			this->platformShapeLabel = (gcnew System::Windows::Forms::Label());
			this->platformPositionLabel = (gcnew System::Windows::Forms::Label());
			this->tabListMenuStrip->SuspendLayout();
			this->fileManagerGroupBox->SuspendLayout();
			this->gameParametersGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerSpritePixtureBox))->BeginInit();
			this->levelObstaclesGroupBox->SuspendLayout();
			this->tileEditorGroupBox->SuspendLayout();
			this->platformPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->objectPictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelEditorPictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// tabListMenuStrip
			// 
			this->tabListMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileTabMenuItem,
					this->gameTabMenuItem, this->levelTabMenuItem
			});
			this->tabListMenuStrip->Location = System::Drawing::Point(0, 0);
			this->tabListMenuStrip->Name = L"tabListMenuStrip";
			this->tabListMenuStrip->Size = System::Drawing::Size(490, 24);
			this->tabListMenuStrip->TabIndex = 0;
			this->tabListMenuStrip->Text = L"Tab List";
			// 
			// fileTabMenuItem
			// 
			this->fileTabMenuItem->Name = L"fileTabMenuItem";
			this->fileTabMenuItem->Size = System::Drawing::Size(87, 20);
			this->fileTabMenuItem->Text = L"File Manager";
			// 
			// gameTabMenuItem
			// 
			this->gameTabMenuItem->Name = L"gameTabMenuItem";
			this->gameTabMenuItem->Size = System::Drawing::Size(112, 20);
			this->gameTabMenuItem->Text = L"Game Parameters";
			// 
			// levelTabMenuItem
			// 
			this->levelTabMenuItem->Name = L"levelTabMenuItem";
			this->levelTabMenuItem->Size = System::Drawing::Size(100, 20);
			this->levelTabMenuItem->Text = L"Level Obstacles";
			// 
			// fileManagerGroupBox
			// 
			this->fileManagerGroupBox->Controls->Add(this->loadLevelStatusLabel);
			this->fileManagerGroupBox->Controls->Add(this->saveLevelStatusLabel);
			this->fileManagerGroupBox->Controls->Add(this->loadLevelButton);
			this->fileManagerGroupBox->Controls->Add(this->saveLevelButton);
			this->fileManagerGroupBox->Location = System::Drawing::Point(1300, 28);
			this->fileManagerGroupBox->Name = L"fileManagerGroupBox";
			this->fileManagerGroupBox->Size = System::Drawing::Size(465, 388);
			this->fileManagerGroupBox->TabIndex = 1;
			this->fileManagerGroupBox->TabStop = false;
			this->fileManagerGroupBox->Text = L"File Manager";
			// 
			// loadLevelStatusLabel
			// 
			this->loadLevelStatusLabel->AutoSize = true;
			this->loadLevelStatusLabel->Location = System::Drawing::Point(165, 104);
			this->loadLevelStatusLabel->Name = L"loadLevelStatusLabel";
			this->loadLevelStatusLabel->Size = System::Drawing::Size(17, 13);
			this->loadLevelStatusLabel->TabIndex = 3;
			this->loadLevelStatusLabel->Text = L"nil";
			// 
			// saveLevelStatusLabel
			// 
			this->saveLevelStatusLabel->AutoSize = true;
			this->saveLevelStatusLabel->Location = System::Drawing::Point(164, 52);
			this->saveLevelStatusLabel->Name = L"saveLevelStatusLabel";
			this->saveLevelStatusLabel->Size = System::Drawing::Size(17, 13);
			this->saveLevelStatusLabel->TabIndex = 2;
			this->saveLevelStatusLabel->Text = L"nil";
			// 
			// loadLevelButton
			// 
			this->loadLevelButton->Location = System::Drawing::Point(7, 72);
			this->loadLevelButton->Name = L"loadLevelButton";
			this->loadLevelButton->Size = System::Drawing::Size(151, 46);
			this->loadLevelButton->TabIndex = 1;
			this->loadLevelButton->Text = L"Load Level";
			this->loadLevelButton->UseVisualStyleBackColor = true;
			// 
			// saveLevelButton
			// 
			this->saveLevelButton->Location = System::Drawing::Point(7, 20);
			this->saveLevelButton->Name = L"saveLevelButton";
			this->saveLevelButton->Size = System::Drawing::Size(150, 46);
			this->saveLevelButton->TabIndex = 0;
			this->saveLevelButton->Text = L"Save Level";
			this->saveLevelButton->UseVisualStyleBackColor = true;
			// 
			// gameParametersGroupBox
			// 
			this->gameParametersGroupBox->Controls->Add(this->playerSpritePixtureBox);
			this->gameParametersGroupBox->Location = System::Drawing::Point(1300, 28);
			this->gameParametersGroupBox->Name = L"gameParametersGroupBox";
			this->gameParametersGroupBox->Size = System::Drawing::Size(465, 388);
			this->gameParametersGroupBox->TabIndex = 2;
			this->gameParametersGroupBox->TabStop = false;
			this->gameParametersGroupBox->Text = L"Game Parameters";
			// 
			// playerSpritePixtureBox
			// 
			this->playerSpritePixtureBox->Location = System::Drawing::Point(259, 19);
			this->playerSpritePixtureBox->Name = L"playerSpritePixtureBox";
			this->playerSpritePixtureBox->Size = System::Drawing::Size(200, 150);
			this->playerSpritePixtureBox->TabIndex = 0;
			this->playerSpritePixtureBox->TabStop = false;
			// 
			// levelObstaclesGroupBox
			// 
			this->levelObstaclesGroupBox->Controls->Add(this->tileEditorGroupBox);
			this->levelObstaclesGroupBox->Controls->Add(this->levelEditorPictureBox);
			this->levelObstaclesGroupBox->Location = System::Drawing::Point(13, 28);
			this->levelObstaclesGroupBox->Name = L"levelObstaclesGroupBox";
			this->levelObstaclesGroupBox->Size = System::Drawing::Size(465, 388);
			this->levelObstaclesGroupBox->TabIndex = 3;
			this->levelObstaclesGroupBox->TabStop = false;
			this->levelObstaclesGroupBox->Text = L"Level Obstacles";
			// 
			// tileEditorGroupBox
			// 
			this->tileEditorGroupBox->Controls->Add(this->platformPanel);
			this->tileEditorGroupBox->Controls->Add(this->objectPictureBox);
			this->tileEditorGroupBox->Location = System::Drawing::Point(7, 175);
			this->tileEditorGroupBox->Name = L"tileEditorGroupBox";
			this->tileEditorGroupBox->Size = System::Drawing::Size(452, 207);
			this->tileEditorGroupBox->TabIndex = 1;
			this->tileEditorGroupBox->TabStop = false;
			this->tileEditorGroupBox->Text = L"Tile Editor";
			// 
			// platformPanel
			// 
			this->platformPanel->Controls->Add(this->platformPositionLabel);
			this->platformPanel->Controls->Add(this->platformShapeLabel);
			this->platformPanel->Controls->Add(this->platformStabilityLabel);
			this->platformPanel->Controls->Add(this->platformHeightLabel);
			this->platformPanel->Controls->Add(this->platformObstaclesLabel);
			this->platformPanel->Controls->Add(this->platformAxisLabel);
			this->platformPanel->Controls->Add(this->platformSpeedLabel);
			this->platformPanel->Controls->Add(this->platformLengthLabel);
			this->platformPanel->Location = System::Drawing::Point(7, 19);
			this->platformPanel->Name = L"platformPanel";
			this->platformPanel->Size = System::Drawing::Size(283, 182);
			this->platformPanel->TabIndex = 1;
			// 
			// objectPictureBox
			// 
			this->objectPictureBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"objectPictureBox.InitialImage")));
			this->objectPictureBox->Location = System::Drawing::Point(296, 19);
			this->objectPictureBox->Name = L"objectPictureBox";
			this->objectPictureBox->Size = System::Drawing::Size(150, 182);
			this->objectPictureBox->TabIndex = 0;
			this->objectPictureBox->TabStop = false;
			// 
			// levelEditorPictureBox
			// 
			this->levelEditorPictureBox->Location = System::Drawing::Point(259, 19);
			this->levelEditorPictureBox->Name = L"levelEditorPictureBox";
			this->levelEditorPictureBox->Size = System::Drawing::Size(200, 150);
			this->levelEditorPictureBox->TabIndex = 0;
			this->levelEditorPictureBox->TabStop = false;
			// 
			// platformLengthLabel
			// 
			this->platformLengthLabel->AutoSize = true;
			this->platformLengthLabel->Location = System::Drawing::Point(4, 4);
			this->platformLengthLabel->Name = L"platformLengthLabel";
			this->platformLengthLabel->Size = System::Drawing::Size(40, 13);
			this->platformLengthLabel->TabIndex = 0;
			this->platformLengthLabel->Text = L"Length";
			// 
			// platformSpeedLabel
			// 
			this->platformSpeedLabel->AutoSize = true;
			this->platformSpeedLabel->Location = System::Drawing::Point(4, 21);
			this->platformSpeedLabel->Name = L"platformSpeedLabel";
			this->platformSpeedLabel->Size = System::Drawing::Size(38, 13);
			this->platformSpeedLabel->TabIndex = 1;
			this->platformSpeedLabel->Text = L"Speed";
			// 
			// platformAxisLabel
			// 
			this->platformAxisLabel->AutoSize = true;
			this->platformAxisLabel->Location = System::Drawing::Point(4, 38);
			this->platformAxisLabel->Name = L"platformAxisLabel";
			this->platformAxisLabel->Size = System::Drawing::Size(26, 13);
			this->platformAxisLabel->TabIndex = 2;
			this->platformAxisLabel->Text = L"Axis";
			// 
			// platformObstaclesLabel
			// 
			this->platformObstaclesLabel->AutoSize = true;
			this->platformObstaclesLabel->Location = System::Drawing::Point(155, 4);
			this->platformObstaclesLabel->Name = L"platformObstaclesLabel";
			this->platformObstaclesLabel->Size = System::Drawing::Size(54, 13);
			this->platformObstaclesLabel->TabIndex = 3;
			this->platformObstaclesLabel->Text = L"Obstacles";
			// 
			// platformHeightLabel
			// 
			this->platformHeightLabel->AutoSize = true;
			this->platformHeightLabel->Location = System::Drawing::Point(4, 55);
			this->platformHeightLabel->Name = L"platformHeightLabel";
			this->platformHeightLabel->Size = System::Drawing::Size(38, 13);
			this->platformHeightLabel->TabIndex = 4;
			this->platformHeightLabel->Text = L"Height";
			// 
			// platformStabilityLabel
			// 
			this->platformStabilityLabel->AutoSize = true;
			this->platformStabilityLabel->Location = System::Drawing::Point(4, 72);
			this->platformStabilityLabel->Name = L"platformStabilityLabel";
			this->platformStabilityLabel->Size = System::Drawing::Size(43, 13);
			this->platformStabilityLabel->TabIndex = 5;
			this->platformStabilityLabel->Text = L"Stability";
			// 
			// platformShapeLabel
			// 
			this->platformShapeLabel->AutoSize = true;
			this->platformShapeLabel->Location = System::Drawing::Point(4, 89);
			this->platformShapeLabel->Name = L"platformShapeLabel";
			this->platformShapeLabel->Size = System::Drawing::Size(38, 13);
			this->platformShapeLabel->TabIndex = 7;
			this->platformShapeLabel->Text = L"Shape";
			// 
			// platformPositionLabel
			// 
			this->platformPositionLabel->AutoSize = true;
			this->platformPositionLabel->Location = System::Drawing::Point(4, 106);
			this->platformPositionLabel->Name = L"platformPositionLabel";
			this->platformPositionLabel->Size = System::Drawing::Size(44, 13);
			this->platformPositionLabel->TabIndex = 8;
			this->platformPositionLabel->Text = L"Position";
			// 
			// PlatformEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 428);
			this->Controls->Add(this->levelObstaclesGroupBox);
			this->Controls->Add(this->gameParametersGroupBox);
			this->Controls->Add(this->fileManagerGroupBox);
			this->Controls->Add(this->tabListMenuStrip);
			this->Name = L"PlatformEditor";
			this->Text = L"PlatformEditor";
			this->tabListMenuStrip->ResumeLayout(false);
			this->tabListMenuStrip->PerformLayout();
			this->fileManagerGroupBox->ResumeLayout(false);
			this->fileManagerGroupBox->PerformLayout();
			this->gameParametersGroupBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->playerSpritePixtureBox))->EndInit();
			this->levelObstaclesGroupBox->ResumeLayout(false);
			this->tileEditorGroupBox->ResumeLayout(false);
			this->platformPanel->ResumeLayout(false);
			this->platformPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->objectPictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->levelEditorPictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
