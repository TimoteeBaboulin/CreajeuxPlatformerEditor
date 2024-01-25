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

	private: System::Windows::Forms::ComboBox^ platformAxisValueComboBox;
	private: System::Windows::Forms::TextBox^ platformSpeedValueTextBox;
	private: System::Windows::Forms::TextBox^ platformAxisValueTextBox;
	private: System::Windows::Forms::Label^ platformFrictionLabel;
	private: System::Windows::Forms::Label^ platformDensityLabel;
	private: System::Windows::Forms::TextBox^ platformHeightValueTextBox;

	private: System::Windows::Forms::TextBox^ platformlengthValueTextBox;
	private: System::Windows::Forms::ComboBox^ platformShapeValueComboBox;
	private: System::Windows::Forms::ComboBox^ platformStabilityValueComboBox;
	private: System::Windows::Forms::TextBox^ platformFrictionValueTextBox;
	private: System::Windows::Forms::TextBox^ platformDensityValueTextBox;
	private: System::Windows::Forms::TextBox^ platformXValueTextBox;
	private: System::Windows::Forms::TextBox^ platformYValueTextBox;














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
			this->platformSpeedValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformAxisValueComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->platformAxisValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformDensityLabel = (gcnew System::Windows::Forms::Label());
			this->platformFrictionLabel = (gcnew System::Windows::Forms::Label());
			this->platformlengthValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformHeightValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformStabilityValueComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->platformShapeValueComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->platformYValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformXValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformDensityValueTextBox = (gcnew System::Windows::Forms::TextBox());
			this->platformFrictionValueTextBox = (gcnew System::Windows::Forms::TextBox());
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
			this->platformPanel->AutoScroll = true;
			this->platformPanel->Controls->Add(this->platformFrictionLabel);
			this->platformPanel->Controls->Add(this->platformObstaclesLabel);
			this->platformPanel->Controls->Add(this->platformFrictionValueTextBox);
			this->platformPanel->Controls->Add(this->platformDensityValueTextBox);
			this->platformPanel->Controls->Add(this->platformDensityLabel);
			this->platformPanel->Controls->Add(this->platformXValueTextBox);
			this->platformPanel->Controls->Add(this->platformYValueTextBox);
			this->platformPanel->Controls->Add(this->platformShapeValueComboBox);
			this->platformPanel->Controls->Add(this->platformStabilityValueComboBox);
			this->platformPanel->Controls->Add(this->platformPositionLabel);
			this->platformPanel->Controls->Add(this->platformHeightValueTextBox);
			this->platformPanel->Controls->Add(this->platformlengthValueTextBox);
			this->platformPanel->Controls->Add(this->platformAxisValueTextBox);
			this->platformPanel->Controls->Add(this->platformAxisValueComboBox);
			this->platformPanel->Controls->Add(this->platformShapeLabel);
			this->platformPanel->Controls->Add(this->platformSpeedValueTextBox);
			this->platformPanel->Controls->Add(this->platformLengthLabel);
			this->platformPanel->Controls->Add(this->platformStabilityLabel);
			this->platformPanel->Controls->Add(this->platformSpeedLabel);
			this->platformPanel->Controls->Add(this->platformAxisLabel);
			this->platformPanel->Controls->Add(this->platformHeightLabel);
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
			this->platformLengthLabel->Location = System::Drawing::Point(11, 8);
			this->platformLengthLabel->Name = L"platformLengthLabel";
			this->platformLengthLabel->Size = System::Drawing::Size(40, 13);
			this->platformLengthLabel->TabIndex = 0;
			this->platformLengthLabel->Text = L"Length";
			// 
			// platformSpeedLabel
			// 
			this->platformSpeedLabel->AutoSize = true;
			this->platformSpeedLabel->Location = System::Drawing::Point(11, 33);
			this->platformSpeedLabel->Name = L"platformSpeedLabel";
			this->platformSpeedLabel->Size = System::Drawing::Size(38, 13);
			this->platformSpeedLabel->TabIndex = 1;
			this->platformSpeedLabel->Text = L"Speed";
			// 
			// platformAxisLabel
			// 
			this->platformAxisLabel->AutoSize = true;
			this->platformAxisLabel->Location = System::Drawing::Point(11, 60);
			this->platformAxisLabel->Name = L"platformAxisLabel";
			this->platformAxisLabel->Size = System::Drawing::Size(26, 13);
			this->platformAxisLabel->TabIndex = 2;
			this->platformAxisLabel->Text = L"Axis";
			// 
			// platformObstaclesLabel
			// 
			this->platformObstaclesLabel->AutoSize = true;
			this->platformObstaclesLabel->Location = System::Drawing::Point(156, 120);
			this->platformObstaclesLabel->Name = L"platformObstaclesLabel";
			this->platformObstaclesLabel->Size = System::Drawing::Size(54, 13);
			this->platformObstaclesLabel->TabIndex = 3;
			this->platformObstaclesLabel->Text = L"Obstacles";
			// 
			// platformHeightLabel
			// 
			this->platformHeightLabel->AutoSize = true;
			this->platformHeightLabel->Location = System::Drawing::Point(11, 88);
			this->platformHeightLabel->Name = L"platformHeightLabel";
			this->platformHeightLabel->Size = System::Drawing::Size(38, 13);
			this->platformHeightLabel->TabIndex = 4;
			this->platformHeightLabel->Text = L"Height";
			// 
			// platformStabilityLabel
			// 
			this->platformStabilityLabel->AutoSize = true;
			this->platformStabilityLabel->Location = System::Drawing::Point(11, 115);
			this->platformStabilityLabel->Name = L"platformStabilityLabel";
			this->platformStabilityLabel->Size = System::Drawing::Size(43, 13);
			this->platformStabilityLabel->TabIndex = 5;
			this->platformStabilityLabel->Text = L"Stability";
			// 
			// platformShapeLabel
			// 
			this->platformShapeLabel->AutoSize = true;
			this->platformShapeLabel->Location = System::Drawing::Point(11, 143);
			this->platformShapeLabel->Name = L"platformShapeLabel";
			this->platformShapeLabel->Size = System::Drawing::Size(38, 13);
			this->platformShapeLabel->TabIndex = 7;
			this->platformShapeLabel->Text = L"Shape";
			// 
			// platformPositionLabel
			// 
			this->platformPositionLabel->AutoSize = true;
			this->platformPositionLabel->Location = System::Drawing::Point(156, 8);
			this->platformPositionLabel->Name = L"platformPositionLabel";
			this->platformPositionLabel->Size = System::Drawing::Size(44, 13);
			this->platformPositionLabel->TabIndex = 8;
			this->platformPositionLabel->Text = L"Position";
			// 
			// platformSpeedValueTextBox
			// 
			this->platformSpeedValueTextBox->Location = System::Drawing::Point(57, 31);
			this->platformSpeedValueTextBox->Name = L"platformSpeedValueTextBox";
			this->platformSpeedValueTextBox->Size = System::Drawing::Size(66, 20);
			this->platformSpeedValueTextBox->TabIndex = 10;
			// 
			// platformAxisValueComboBox
			// 
			this->platformAxisValueComboBox->FormattingEnabled = true;
			this->platformAxisValueComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"None", L"X", L"Y", L"Radial" });
			this->platformAxisValueComboBox->Location = System::Drawing::Point(57, 57);
			this->platformAxisValueComboBox->Name = L"platformAxisValueComboBox";
			this->platformAxisValueComboBox->Size = System::Drawing::Size(66, 21);
			this->platformAxisValueComboBox->TabIndex = 11;
			// 
			// platformAxisValueTextBox
			// 
			this->platformAxisValueTextBox->Enabled = false;
			this->platformAxisValueTextBox->Location = System::Drawing::Point(129, 57);
			this->platformAxisValueTextBox->Name = L"platformAxisValueTextBox";
			this->platformAxisValueTextBox->Size = System::Drawing::Size(41, 20);
			this->platformAxisValueTextBox->TabIndex = 12;
			// 
			// platformDensityLabel
			// 
			this->platformDensityLabel->AutoSize = true;
			this->platformDensityLabel->Location = System::Drawing::Point(156, 33);
			this->platformDensityLabel->Name = L"platformDensityLabel";
			this->platformDensityLabel->Size = System::Drawing::Size(42, 13);
			this->platformDensityLabel->TabIndex = 9;
			this->platformDensityLabel->Text = L"Density";
			// 
			// platformFrictionLabel
			// 
			this->platformFrictionLabel->AutoSize = true;
			this->platformFrictionLabel->Location = System::Drawing::Point(156, 88);
			this->platformFrictionLabel->Name = L"platformFrictionLabel";
			this->platformFrictionLabel->Size = System::Drawing::Size(41, 13);
			this->platformFrictionLabel->TabIndex = 10;
			this->platformFrictionLabel->Text = L"Friction";
			// 
			// platformlengthValueTextBox
			// 
			this->platformlengthValueTextBox->Location = System::Drawing::Point(57, 5);
			this->platformlengthValueTextBox->Name = L"platformlengthValueTextBox";
			this->platformlengthValueTextBox->Size = System::Drawing::Size(66, 20);
			this->platformlengthValueTextBox->TabIndex = 13;
			// 
			// platformHeightValueTextBox
			// 
			this->platformHeightValueTextBox->Location = System::Drawing::Point(57, 85);
			this->platformHeightValueTextBox->Name = L"platformHeightValueTextBox";
			this->platformHeightValueTextBox->Size = System::Drawing::Size(66, 20);
			this->platformHeightValueTextBox->TabIndex = 14;
			// 
			// platformStabilityValueComboBox
			// 
			this->platformStabilityValueComboBox->FormattingEnabled = true;
			this->platformStabilityValueComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Fixed", L"Tilt", L"Rotate" });
			this->platformStabilityValueComboBox->Location = System::Drawing::Point(57, 112);
			this->platformStabilityValueComboBox->Name = L"platformStabilityValueComboBox";
			this->platformStabilityValueComboBox->Size = System::Drawing::Size(66, 21);
			this->platformStabilityValueComboBox->TabIndex = 15;
			// 
			// platformShapeValueComboBox
			// 
			this->platformShapeValueComboBox->FormattingEnabled = true;
			this->platformShapeValueComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Rectangle", L"Octogonal", L"Circle" });
			this->platformShapeValueComboBox->Location = System::Drawing::Point(57, 140);
			this->platformShapeValueComboBox->Name = L"platformShapeValueComboBox";
			this->platformShapeValueComboBox->Size = System::Drawing::Size(66, 21);
			this->platformShapeValueComboBox->TabIndex = 16;
			// 
			// platformYValueTextBox
			// 
			this->platformYValueTextBox->Location = System::Drawing::Point(245, 5);
			this->platformYValueTextBox->Name = L"platformYValueTextBox";
			this->platformYValueTextBox->Size = System::Drawing::Size(35, 20);
			this->platformYValueTextBox->TabIndex = 17;
			// 
			// platformXValueTextBox
			// 
			this->platformXValueTextBox->Location = System::Drawing::Point(206, 5);
			this->platformXValueTextBox->Name = L"platformXValueTextBox";
			this->platformXValueTextBox->Size = System::Drawing::Size(35, 20);
			this->platformXValueTextBox->TabIndex = 18;
			// 
			// platformDensityValueTextBox
			// 
			this->platformDensityValueTextBox->Location = System::Drawing::Point(206, 30);
			this->platformDensityValueTextBox->Name = L"platformDensityValueTextBox";
			this->platformDensityValueTextBox->Size = System::Drawing::Size(74, 20);
			this->platformDensityValueTextBox->TabIndex = 19;
			// 
			// platformFrictionValueTextBox
			// 
			this->platformFrictionValueTextBox->Location = System::Drawing::Point(206, 85);
			this->platformFrictionValueTextBox->Name = L"platformFrictionValueTextBox";
			this->platformFrictionValueTextBox->Size = System::Drawing::Size(74, 20);
			this->platformFrictionValueTextBox->TabIndex = 20;
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
