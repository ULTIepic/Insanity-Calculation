#include <fstream>
#include <iostream>

int main() {
    std::ifstream in("c_to_cpp.txt");
    int val;
    in >> val;
    in.close();

    std::cout << "C++ got value: " << val << std::endl;

    // Write it to an HTML file with JS
    std::ofstream html("compute.html");
    html << R"(
        <html>
        <body>
            <script>
                let result = )" << val << R"(;
                document.body.innerHTML = "JS received: " + result;

                // Write result to a file (simulate via fetch or local method)
                fetch('http://localhost:3000/save?value=' + result)
                    .catch(err => console.error('No local server to catch result'));
            </script>
        </body>
        </html>
    )";
    html.close();

    // Also drop the value in a result file for Python to read
    std::ofstream out("final_result.txt");
    out << val;
    out.close();

    system("start compute.html");
    return 0;
}
